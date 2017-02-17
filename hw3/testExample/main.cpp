#include <iostream>
#include <cmath>
#include "Utils.h"

int main() {

    double d = 123 * (sqrt(352) / 3);
    std::cout << d << std::endl;
    if (isApproximatelyEquals(d, 769.228, 0.001))
        std::cout << "OKay" << std::endl;

    return 0;
}