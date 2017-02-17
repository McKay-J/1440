//
// Created by Stephen Clyde on 2/6/17.
//

#include "UtilsTester.h"

int main() {
    UtilsTester utilsTester;
    utilsTester.testForNormalCases();
    utilsTester.testForBadMargin();
    utilsTester.testForZeros();
    utilsTester.testForMaxDouble();
    utilsTester.testForInfinity();
    utilsTester.testForNegativeNumbers();

    return 0;
}