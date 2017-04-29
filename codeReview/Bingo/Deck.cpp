//
// Created by Stephen Clyde on 2/16/17.
//

#include "Deck.h"
#include "Card.h"
#include <iostream>
#include <vector>
#include <iomanip>

Deck::Deck(int cardSize, int cardCount, int numberMax) : m_deckSize(cardCount)
{
    m_deck.reserve(cardCount);

    for (int i = 0; i < cardCount; i++)
    {
        m_deck.emplace_back(cardSize, (i + 1), numberMax);
    }
}

Deck::~Deck()
{


}

void Deck::print(std::ostream& out)
{
    for (int i = 0; i < m_deckSize; i++)
    {
        print(out, i + 1);
    }
}

void Deck::print(std::ostream& out, int cardIndex)
{
    out << "Card #" << cardIndex << std::endl;

    for (int i = 0; i < m_deck[0].getCardSize(); i++)
    {
        out << "+----";
    }

    out << "+" << std::endl;

    for (int j = 0; j < m_deck[0].getCardSize(); j++)
    {
        for (int k = 0; k < m_deck[0].getCardSize(); k++)
        {
            out << "|" << std::setw(4) << m_deck[cardIndex - 1].getCardNum(j, k);
        }
        out << "|" << std::endl;

        for (int i = 0; i < m_deck[0].getCardSize(); i++)
        {
            out << "+----";
        }
        out << "+" << std::endl;
    }
}
