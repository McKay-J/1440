//
// Created by Stephen Clyde on 3/4/17.
//

#ifndef GEO_REGIONS_REGION_H
#define GEO_REGIONS_REGION_H

#include <string>

class Region {
public:
    typedef enum RegionType { UnknownRegionType, WorldType, NationType, StateType, CountyType, CityType } x;

protected:
    unsigned int    m_id = 0;
    RegionType      m_regionType = UnknownRegionType;
    std::string     m_name;
    unsigned long long int    m_population = 0;
    double          m_area = 0;
    bool            m_isValid = false;
    int m_regionCount = 0;
    int m_allocated = 0;
    Region** m_regions = nullptr;


    // TODO: Add data members to manage sub-regions

private:
    static unsigned int m_nextId;

public:
    static Region* create(std::istream &in);
    static Region* create(const std::string& data);
    static Region* create(RegionType regionType, const std::string& data);
    static std::string regionLabel(RegionType regionType);
    void addRegion(Region*);

protected:
    Region();
    Region(RegionType type, const std::string data[]);

public:
    ~Region();
    unsigned int getId() const { return m_id; }
    RegionType  getType() const { return m_regionType; }
    std::string getRegionLabel() const;
    const std::string& getName() const { return m_name; }
    void setName(const std::string& name) { m_name = name; }
    unsigned int getPopulation() const { return m_population; }
    void setPopulation(unsigned int population) { m_population = population; }
    double getArea() const { return m_area; }
    void setArea(double area) { m_area = area; }
    bool getIsValid() const { return m_isValid; }
    Region* findRegionid(unsigned int id);
    void regionRemover(Region* theRegion);
    // TODO: Add methods to manage sub-regions

    // TODO: Add method to compute total population, as m_population + the total population for all sub-regions
    unsigned long long int computeTotalPopulation(unsigned long long int pop);

    void list(std::ostream& out);
    void display(std::ostream& out, unsigned int displayLevel, bool showChild);
    void save(std::ostream& out);
    int getSubRegionCount()
    {
        return m_regionCount;
    }

    Region* getSubRegionByIndex(int index);

protected:
    virtual void validate();
    void loadChildren(std::istream& in);
    static unsigned int getNextId();

    void grow();

    // TODO: add whatever other helper methods you might need
};


#endif //GEO_REGIONS_REGION_H
