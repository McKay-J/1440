//
// Created by Stephen Clyde on 2/6/17.
//

#include "UtilsTester.h"
#include "../Utils.h"
#include <iostream>
#include <cmath>
#include <cstddef>

void UtilsTester::testForNormalCases()
{

    std::cout << "test for normal cases" << std::endl;

    // Test case 1
    double d1 = 7;
    double d2 = 3;
    double margin = 2;

    bool result = isApproximatelyEquals(d1,d2,margin);

    if (result)
    {
        std::cout << "Unexpected result for (" << d1
                << ", " << d2
                << ", " << margin << ")" << std::endl;
    }

    // Test case 2
    result = isApproximatelyEquals(d2,d1,margin);
    if (result)
    {
        std::cout << "Unexpected result for (" << d2
                  << ", " << d1
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 3
    d1 = 0.0325;
    d2 = 0.03249;
    margin = 0.001;
    result = isApproximatelyEquals(d1,d2,margin);
    if (!result)
    {
        std::cout << "Unexpected result for (" << d1
                  << ", " << d2
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 4
    result = isApproximatelyEquals(d2,d1,margin);
    if (!result)
    {
        std::cout << "Unexpected result for (" << d2
                  << ", " << d1
                  << ", " << margin << ")" << std::endl;
    }
}

void UtilsTester::testForBadMargin()
{
    std::cout << "test for bad margins" << std::endl;

    // Test case 1
    double d1 = 4;
    double d2 = 4;
    double margin = 0;

    bool result = isApproximatelyEquals(d1,d2,margin);

    if (result)
    {
        std::cout << "Unexpected result for (" << d1
                  << ", " << d2
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 2
    margin = -1;
    result = isApproximatelyEquals(d2,d1,margin);
    if (result)
    {
        std::cout << "Unexpected result for (" << d2
                  << ", " << d1
                  << ", " << margin << ")" << std::endl;
    }
}

void UtilsTester::testForZeros()
{
    std::cout << "test for zeros" << std::endl;

    // Test case 1
    double d1 = 0;
    double d2 = 4;
    double margin = 0.1;

    bool result = isApproximatelyEquals(d1,d2,margin);

    if (result)
    {
        std::cout << "Unexpected result for (" << d1
                  << ", " << d2
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 2
    result = isApproximatelyEquals(d2,d1,margin);
    if (result)
    {
        std::cout << "Unexpected result for (" << d2
                  << ", " << d1
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 3
    result = isApproximatelyEquals(d1,d1,margin);
    if (!result)
    {
        std::cout << "Unexpected result for (" << d1
                  << ", " << d1
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 4
    d2 = 0.0002;
    margin = 0.001;
    result = isApproximatelyEquals(d1,d2,margin);
    if (!result)
    {
        std::cout << "Unexpected result for (" << d2
                  << ", " << d1
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 5
    result = isApproximatelyEquals(d2,d1,margin);
    if (!result)
    {
        std::cout << "Unexpected result for (" << d2
                  << ", " << d1
                  << ", " << margin << ")" << std::endl;
    }
}

void UtilsTester::testForMaxDouble(){
    std::cout << "test for max double" << std::endl;

    // Test case 1
    double d1 = std::numeric_limits<double>::max();
    double d2 = d1 - 0.002;
    double margin = 0.1;

    bool result = isApproximatelyEquals(d1,d2,margin);

    if (!result)
    {
        std::cout << "Unexpected result for (" << d1
                  << ", " << d2
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 2
    result = isApproximatelyEquals(d2,d1,margin);
    if (!result)
    {
        std::cout << "Unexpected result for (" << d2
                  << ", " << d1
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 3
    result = isApproximatelyEquals(d1,d1,margin);
    if (!result)
    {
        std::cout << "Unexpected result for (" << d1
                  << ", " << d1
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 4
    d2 = d1 - 1;
    result = isApproximatelyEquals(d1,d2,margin);
    if (!result)
    {
        std::cout << "Unexpected result for (" << d1
                  << ", " << d2
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 5
    result = isApproximatelyEquals(d2,d1,margin);
    if (!result)
    {
        std::cout << "Unexpected result for (" << d1
                  << ", " << d2
                  << ", " << margin << ")" << std::endl;
    }
}

void UtilsTester::testForInfinity()
{
    std::cout << "test for infinity" << std::endl;

    // Test case 1
    double d1 = INFINITY;
    double d2 = 4;
    double margin = 0.1;

    bool result = isApproximatelyEquals(d1,d2,margin);

    if (result)
    {
        std::cout << "Unexpected result for (" << d1
                  << ", " << d2
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 2
    result = isApproximatelyEquals(d2,d1,margin);
    if (result)
    {
        std::cout << "Unexpected result for (" << d2
                  << ", " << d1
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 3
    result = isApproximatelyEquals(d1,d1,margin);
    if (result)
    {
        std::cout << "Unexpected result for (" << d1
                  << ", " << d1
                  << ", " << margin << ")" << std::endl;
    }
}

void UtilsTester::testForNegativeNumbers()
{
    std::cout << "test for negative numbers" << std::endl;

    // Test case 1
    double d1 = -0.03;
    double d2 = 0.02;
    double margin = 0.01;

    bool result = isApproximatelyEquals(d1,d2,margin);

    if (result)
    {
        std::cout << "Unexpected result for (" << d1
                  << ", " << d2
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 2
    result = isApproximatelyEquals(d2,d1,margin);
    if (result)
    {
        std::cout << "Unexpected result for (" << d2
                  << ", " << d1
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 3
    margin = 0.06;
    result = isApproximatelyEquals(d1,d2,margin);
    if (!result)
    {
        std::cout << "Unexpected result for (" << d1
                  << ", " << d1
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 4
    result = isApproximatelyEquals(d2,d1,margin);
    if (!result)
    {
        std::cout << "Unexpected result for (" << d2
                  << ", " << d1
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 5
    d2 = -0.05;
    result = isApproximatelyEquals(d1,d2,margin);
    if (!result)
    {
        std::cout << "Unexpected result for (" << d1
                  << ", " << d2
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 6
    result = isApproximatelyEquals(d2,d1,margin);
    if (!result)
    {
        std::cout << "Unexpected result for (" << d2
                  << ", " << d1
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 7
    margin = 0.001;
    result = isApproximatelyEquals(d1,d2,margin);
    if (result)
    {
        std::cout << "Unexpected result for (" << d1
                  << ", " << d2
                  << ", " << margin << ")" << std::endl;
    }

}