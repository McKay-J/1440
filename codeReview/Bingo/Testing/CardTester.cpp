//
// Created by tanne on 3/2/2017.
//

#include "CardTester.h"
#include "../Card.h"
#include <iostream>
#include <algorithm>

void CardTester::testForDuplicates()
{
    std::cout << " " << std::endl;
    std::cout << "Test Suite: Card Tester" << std::endl;

    std::cout << "Test Case 1: Testing for Dupilcate Numbers." << std::endl;
    Card card(3,1,18);
    std::vector<std::vector<int>> testCard;

    testCard.resize(3);

    for (int i = 0; i < 3; i++)
    {
        testCard[i].resize(3);
    }

    card.shuffleNumbers(testCard);

    std::sort(testCard.begin(), testCard.end());
    for (int i = 0; i < 3; i++)
    {
        std::sort(testCard[i].begin(), testCard[i].end());
    }

    for (int i = 0; i < testCard.size(); i++)
    {
        for (int j = 0; j < testCard.size(); j++)
        {
            if (testCard[i][j] == testCard[i][j + 1])
            {
                std::cout << "Unexpected Number on Card. Number cannon be Less than or Equal to 0" << std::endl;
            }
        }
    }
}

void CardTester::testMaxNumber()
{
    std::cout << "Test Case 2: Testing for maximum number." << std::endl;
    Card card(3,1,18);
    std::vector<std::vector<int>> testCard;

    testCard.resize(3);

    for (int i = 0; i < 3; i++)
    {
        testCard[i].resize(3);
    }

    card.shuffleNumbers(testCard);

    std::sort(testCard.begin(), testCard.end());
    for (int i = 0; i < 3; i++)
    {
        std::sort(testCard[i].begin(), testCard[i].end());
    }

    for (int i = 0; i < testCard.size(); i++)
    {
        for (int j = 0; j < testCard.size(); j++)
        {
            if (testCard[i][j] > card.getMaxNum())
            {
                std::cout << "Unexpected Number on Card. Number cannnot be greater than max number:" << card.getMaxNum() << std::endl;
            }
        }
    }
}

void CardTester::testConstructor()
{
    std::cout << "Test Case 3: Testing to ensure input's match." << std::endl;
    Card card(3,1,18);
    if (card.getCardId() != 1)
    {
        std::cout << "Unexpected error in Card Index" << std::endl;
    }
    else if (card.getCardSize() != 3)
    {
        std::cout << "Unexpected Error in Card Size" << std::endl;
    }
    else if (card.getMaxNum() != 18)
    {
        std::cout << "Unexpected Error in Max Number." << std::endl;
    }
    std::cout << std::endl;
}