//
// Created by tanne on 3/2/2017.
//

#include "DeckTester.h"
#include "../Deck.h"
#include <iostream>

void DeckTester::testDeckConstructor()
{
    std::cout << "Test Suite: Deck Tester"<<std::endl;
    std::cout << "Test Case 1: Testing for Match in Input." << std::endl;
    Deck testDeck(3,5,18);
    if (testDeck.getDeck()[0].getCardSize() != 3)
    {
        std::cout << "Unexpected Error in Card Size Match." << std::endl;
    }
    else if (testDeck.getDeckSize() != 5)
    {
        std::cout << "Unexpected Error in Card Count Match." << std::endl;
    }
    else if (testDeck.getDeck()[0].getMaxNum() != 18)
    {
        std::cout << "Unexpected Error in Max Number" << std::endl;
    }
}