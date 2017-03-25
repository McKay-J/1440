//
// Created by Stephen Clyde on 3/4/17.
//

#include "Region.h"
#include "Utils.h"
#include "World.h"
#include "Nation.h"
#include "State.h"
#include "County.h"
#include "City.h"

#include <iomanip>
#include <iostream>

const std::string regionDelimiter = "^^^";
const int TAB_SIZE = 4;
const int defaultSize = 10;
unsigned int Region::m_nextId = 0;

Region* Region::create(std::istream &in)
{
    Region* region = nullptr;
    std::string line;
    std::getline(in, line);
    if (line!="")
    {
        region = create(line);
        if (region!= nullptr)
            region->loadChildren(in);
    }
    return region;
}
Region* Region::create(const std::string& data)
{
    Region* region = nullptr;
    std::string regionData;
    unsigned long commaPos = (int) data.find(",");
    if (commaPos != std::string::npos)
    {
        std::string regionTypeStr = data.substr(0,commaPos);
        regionData = data.substr(commaPos+1);

        bool isValid;
        RegionType regionType = (RegionType) convertStringToInt(regionTypeStr, &isValid);

        if (isValid)
        {
            region = create(regionType, regionData);
        }

    }

    return region;
}

Region* Region::create(RegionType regionType, const std::string& data)
{
    Region* region = nullptr;
    std::string fields[3];
    if (split(data, ',', fields, 3)) {

        // Create the region based on type
        switch (regionType) {
            case WorldType:
                region = new World();
                break;
            case NationType:
                region = new Nation(fields);
                break;
            case StateType:
                region = new State(fields);
                break;
            case CityType:
                region = new City(fields);
                break;
            case CountyType:
                region = new County(fields);
                break;

            default:
                break;
        }

        // If the region isn't valid, git ride of it
        if (region != nullptr && !region->getIsValid()) {
            delete region;
            region = nullptr;
        }
    }

    return region;
}

std::string Region::regionLabel(RegionType regionType)
{
    std::string label = "Unknown";
    switch (regionType)
    {
        case Region::WorldType:
            label = "World";
            break;
        case Region::NationType:
            label = "Nation";
            break;
        case Region::StateType:
            label = "State";
            break;
        case Region::CountyType:
            label = "County";
            break;
        case Region::CityType:
            label = "City";
            break;
        default:
            break;
    }
    return label;
}

Region::Region() { }

Region::Region(RegionType type, const std::string data[]) :
        m_id(getNextId()), m_regionType(type), m_isValid(true)
{
    m_name = data[0];
    m_population = convertStringToUnsignedInt(data[1], &m_isValid);
    if (m_isValid)
        m_area = convertStringToDouble(data[2], &m_isValid);
}

Region::~Region()
{
    if (m_allocated!=0)
    {
        for (int i = 0; i < m_regionCount; i++) {
            delete m_regions[i];
        }
        delete [] m_regions;
    }
}

std::string Region::getRegionLabel() const
{
    return regionLabel(getType());
}

unsigned long long int Region::computeTotalPopulation(unsigned long long int pop)
{

    unsigned long long int population = pop;

    for(int i = 0; i<m_regionCount; ++i)
    {
        population += m_regions[i]->computeTotalPopulation(m_regions[i]->m_population);
    }
    // TODO: implement computeTotalPopulation, such that the result is m_population + the total population for all sub-regions
    return population;
}



void Region::list(std::ostream& out)
{
    out << std::endl;
    out << getName() << ":" << std::endl;

    for (int i=0; i<m_regionCount; i++)
    {
        if (m_regions[i]!= nullptr && m_regions[i]->getIsValid())
            m_regions[i]->display(out, 0, false);
    }

    // TODO: implement the loop in the list method
    // foreach subregion, print out
    //      id    name
}

void Region::display(std::ostream& out, unsigned int displayLevel, bool showChild)
{
    if (displayLevel>0)
    {
        out << std::setw(displayLevel * TAB_SIZE) << " ";
    }

    unsigned totalPopulation = computeTotalPopulation(m_population);
    double area = getArea();
    double density = (double) totalPopulation / area;

    // TODO: compute the totalPopulation using a method

    out << std::setw(6) << getId() << "  "
        << getName() << ", population="
        << totalPopulation
        << ", area=" << area
        << ", density=" << density << std::endl;

    if (showChild)
    {
        // TODO: implement loop in display method
        for(int i = 0; i<m_regionCount; i++)
        {
            m_regions[i]->display(out, displayLevel+ 1, showChild);
        }
        // foreach subregion
        //      display that subregion at displayLevel+1 with the same showChild value
    }
}

void Region::save(std::ostream& out)
{
    out << getType()
        << "," << getName()
        << "," << getPopulation()
        << "," << getArea()
        << std::endl;

    // TODO: implement loop in save method to save each sub-region
    // foreach subregion,
    //      save that region
for(int i = 0; i<m_regionCount; i++)
{
    if(m_regions[i]!= nullptr && m_regions[i]->getIsValid())
    {
        m_regions[i]->save(out);
    }
}
    out << regionDelimiter << std::endl;
}

void Region::validate()
{
    m_isValid = (m_area!=UnknownRegionType && m_name!="" && m_area>=0);
}

void Region::loadChildren(std::istream& in)
{
    std::string line;
    bool done = false;
    while (!in.eof() && !done)
    {
        std::getline(in, line);
        if (line==regionDelimiter)
        {
            done = true;
        }
        else
        {
            Region* child = create(line);
            if (child!= nullptr)
            {

                // TODO: Add the new sub-region to this region
                this->addRegion(child);
                child->loadChildren(in);
            }
        }
    }
}

unsigned int Region::getNextId()
{
    if (m_nextId==UINT32_MAX)
        m_nextId=1;

    return m_nextId++;
}
void Region::addRegion(Region * child)
{
    if (child!= nullptr)
    {
        if (m_allocated == 0) {
            m_regions = new Region *[10];
            m_allocated = 10;
        }

        if (m_regionCount == m_allocated)
            grow();

        m_regions[m_regionCount++] = child;
    }
}

void Region::grow()
{
    m_allocated *= 2;
    Region** newRegion = new Region*[m_allocated];

    for (int i=0; i<m_allocated; i++)
    {
        newRegion[i] = m_regions[i];
    }

    delete [] m_regions;

    m_regions = newRegion;
}

Region* Region::getSubRegionByIndex(int index)
{

    Region* result = nullptr;
    if (m_regionCount>0 && index>=0 && index < m_regionCount)
    {
        result = m_regions[index];
    }
    return result;
}


Region* Region::findRegionid(unsigned int id)
{
    Region* theRegion = nullptr;

    for (int i = 0; i < m_regionCount; ++i)
    {
        if (m_regions[i]->getId() == id)
        {
           theRegion = m_regions[i];
        }
    }
    return theRegion;
}


void Region::regionRemover(Region* theRegion)
{
    int position = 0;

    if(theRegion == nullptr)
    {
        std::cout << "The Region does not exist!" << std::endl;
    }
    else
    {
        for (int i = 0; i < m_regionCount; ++i)
        {
         if(m_regions[i]->getId() == theRegion->getId())
         {
             position = i;
         }
        }
        theRegion = nullptr;
        delete theRegion;


        for(int j = position; j < m_regionCount - 1; j++)
        {
            m_regions[j] = m_regions[j + 1];
        }
        --m_regionCount;
        std::cout << "Deleted!" << std::endl;

    }
}