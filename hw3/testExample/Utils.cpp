//
// Created by Stephen Clyde on 2/6/17.
//
#include <cmath>

bool isApproximatelyEquals(double d1, double d2, double margin)
{
    return fabs(d1 - d2) < margin;
}