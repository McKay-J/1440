//
// Created by tanne on 3/1/2017.
//
#include <iostream>
#include "Card.h"
#include <Chrono>
#include <algorithm>
#include <random>

Card::Card(int cardSize, int cardId, int maxNumber)
: m_cardSize(cardSize), m_cardId(cardId), m_maxNumber(maxNumber)
{
    m_card.resize(cardSize);

    for (int i = 0; i < cardSize; i++)
    {
        m_card[i].resize(cardSize);

    }
    shuffleNumbers(m_card);
}

void Card::shuffleNumbers(std::vector<std::vector<int>> &vec)
{
    std::vector<int> numVec (m_maxNumber);
    numVec[0] = 1;
    for (int i = 1; i < m_maxNumber; i++)
    {
        numVec[i] = i + 1;
    }

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    shuffle (numVec.begin(), numVec.end(), std::default_random_engine(seed));

    int colCount = 0;
    for (int j = 0; j < m_cardSize; j++)
    {
        for (int k = 0; k < m_cardSize; k++)
        {
            vec[j][k] = numVec[colCount];
            colCount++;
        }
    }
}

Card::~Card()
{

}


int Card::getCardNum(const int col, const int row)
{
    int result = m_card[col][row];

    return result;
}