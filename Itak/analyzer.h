//
// Created by McKay Jensen on 4/18/17.
//

#ifndef ITAK_ANALYZER_H
#define ITAK_ANALYZER_H

#include <fstream>
#include "Configuration.h"
#include "ResultSet.h"

class Analyzer
{
public:

    Analyzer(){}
    Analyzer(Configuration timeRange, Configuration likely, Configuration possible) :
            m_timeRange(timeRange),
            m_likely(likely),
            m_possible(possible)
    {}
    Analyzer(Configuration likely, Configuration possible) :
            m_likely(likely),
            m_possible(possible)
    {}
    virtual ResultSet run(std::ifstream& fin) = 0;

private:
    Configuration m_timeRange;
    Configuration m_likely;
    Configuration m_possible;
};


#endif //ITAK_ANALYZER_H