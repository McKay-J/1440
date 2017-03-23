//
// Created by Stephen Clyde on 2/16/17.
//
#include <vector>
#include <iomanip>
#include "Deck.h"
#include "Card.h"

Deck::Deck(int cardSize, int cardCount, int numberMax) : m_deckSize(cardCount)
{
    m_deck.reserve(cardCount);
   for(int i = 0; i < cardCount; i++)
   {
       m_deck.emplace_back(cardSize, (i + 1), numberMax);
   }
}

void Deck::print(std::ostream& out)
{
    for (int i = 0; i < m_deckSize; i++)
    {
        print(out, i+1);
    }
}



void Deck::print(std::ostream& out, int cardIndex)
{
    out << "Card #" << cardIndex << std::endl;
    for (int u = 0; u < m_deck[0].cardSize(); u++)
    {
        out << "+----";
    }

    out << "+" << std::endl;

    for (int i = 0; i < m_deck[0].cardSize(); i++)
    {
        for (int j = 0; j < m_deck[0].cardSize(); j++)
        {
            out << "|" << std::setw(4) << m_deck[cardIndex - 1].getCardNum(i, j);
        }

        out << "|" << std::endl;

        for (int u = 0; u < m_deck[0].cardSize(); u++)
        {
            out << "+----";
        }
        out << "+" << std::endl;
    }

}


Deck::~Deck()
{

}



