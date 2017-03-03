//
// Created by McKay Jensen on 3/2/17.
//

#include "DeckTester.h"
#include "../Deck.h"
#include <iostream>

void DeckTester::testDeckConstructor()
{
    std::cout << "testing Deck Tester" << std::endl;
    std::cout << "test case 1: matching input" << std::endl;
    Deck deckTester(3,5,18);
    if(deckTester.getDeck()[0].cardSize() != 3)
    {
        std::cout << "Error: expected 3 for card size" << std::endl;
    }else if(deckTester.getDeckSize() != 5)
    {
        std::cout << "Error: Expected 5 for card count" << std::endl;
    }else if(deckTester.getDeck()[0].getMaxNum() != 18)
    {
        std::cout << "Error: expected 18 for max number" << std::endl;
    }
}