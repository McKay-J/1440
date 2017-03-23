//
// Created by Stephen Clyde on 2/16/17.
//

#ifndef BINGO_DECK_H
#define BINGO_DECK_H

#include <ostream>

#include "Card.h"

class Card;

// TODO: Extend this definition as you see fit

class Deck {
    friend class Card;
public:

    Deck(int cardSize, int cardCount, int numberMax);
    ~Deck();

    void print(std::ostream& out);
    void print(std::ostream& out, int cardIndex);
    std::vector<Card> getDeck() { return m_deck; }
    const int getDeckSize() { return m_deckSize; }

private:
    std::vector<Card> m_deck;
    const int m_deckSize;
};

#endif //BINGO_DECK_H
