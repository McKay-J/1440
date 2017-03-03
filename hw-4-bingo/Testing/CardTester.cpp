//
// Created by McKay Jensen on 3/2/17.
//

#include "CardTester.h"
#include "../Card.h"
#include <iostream>
#include <algorithm>

void CardTester::duplicateTester()
{
    std::cout <<" " << std::endl;
    std::cout << "Test Suite: Card Tester" << std::endl;

    std::cout << "Test Case 1: Testing for Duplicate Numbers." << std::endl;
    Card card(3, 1, 18);
    std::vector<std::vector<int>> testCard;

    testCard.resize(3);

    for (int i = 0; i < 3; i++)
    {
        testCard[i].resize(3);
    }

    card.shuffleNumbers(testCard);

    std::sort(testCard.begin(), testCard.end());
    for (int k = 0; k < 3; ++k)
    {
        std::sort(testCard[k].begin(), testCard[k].end());
    }

    for (int i = 0; i < testCard.size(); i++)
    {
        for (int j = 0; j < testCard.size(); ++j)
        {
            if (testCard[i][j] == testCard[i][j + 1])
            {
                std::cout << "Unexpected Number on Card. Number cannot be Less than or Equal to 0" << std::endl;
            }
        }
    }
}


void CardTester::maxNumber()
{
    std::cout << "Test Case 2: Testing for maximum number." << std::endl;
    Card card(3, 1, 18);
    std::vector<std::vector<int>> testCard;

    testCard.resize(3);

    for (int i = 0; i < 3; i++)
    {
        testCard[i].resize(3);
    }

    card.shuffleNumbers(testCard);

    std::sort(testCard.begin(), testCard.end());
    for (int k = 0; k < 3; ++k)
    {
        std::sort(testCard[k].begin(), testCard[k].end());
    }

    for (int i = 0; i < testCard.size(); i++)
    {
        for (int j = 0; j < testCard.size(); ++j)
        {
            if (testCard[i][j] > card.getMaxNum())
            {
                std::cout << "Unexpected Number on Card. Number cannot be greater than max number: " << card.getMaxNum() << std::endl;
            }
        }
    }
}


void CardTester::constructorTester()
{
    std::cout << "Test Case 3: Testing to Ensure Input's Match." << std::endl;
    Card card(3, 1, 18);
    if (card.getAddress() != 1)
    {
        std::cout << "Unexpected Error in Card Index" << std::endl;
    }
    else if (card.cardSize() != 3)
    {
        std::cout << "Unexpected Error in Card Size" << std::endl;
    }
    else if (card.getMaxNum() != 18)
    {
        std::cout << "Unexpected Error in Max Number." << std::endl;
    }
    std::cout << std::endl;
}

