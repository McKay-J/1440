//
// Created by McKay Jensen on 2/27/17.
//
#include <iostream>
#include <vector>
#include "Card.h"
#include <random>
#include <algorithm>
#include <chrono>

Card::Card(int cardSize, int cardAddress, int maxNumber)
: m_cardSize(cardSize), m_address(cardAddress), max_number(maxNumber)
{
    m_card.resize(cardSize);
    for(int i = 0; i < cardSize; i++)
    {
        m_card[i].resize(cardSize);

    }
    shuffleNumbers(m_card);
}


void Card::shuffleNumbers(std::vector<std::vector<int>>& vec)
{
    std::vector<int> numVec(max_number);

    numVec[0] = 1;
    for(int i = 1; i < max_number; i++)
    {
        numVec[i] = i + 1;
    }

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::random_shuffle(numVec.begin(), numVec.end());

    int columnCounter = 0;
    for(int j = 0; j < m_cardSize; j++)
    {
        for(int a = 0; a < m_cardSize; a++)
     {
        vec[j][a] = numVec[columnCounter];
         columnCounter++;
     }
    }
}

int Card::getCardNum(const int col, const int row) {
    int result = m_card[col][row];
    return result;
}

Card::~Card()
    {
    
    }