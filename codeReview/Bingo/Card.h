//
// Created by tanne on 3/1/2017.
//

#ifndef BINGO_CARD_H
#define BINGO_CARD_H

#include <vector>

class Deck;

class Card
{
    friend class Deck;
    friend class CardTester;

private:
    const int m_cardSize;
    const int m_cardId;
    const int m_maxNumber;
    std::vector<std::vector<int>> m_card;

public:
    Card(const int cardSize, const int cardId, const int maxNumber);
    void shuffleNumbers (std::vector<std::vector<int>>& vec);
    ~Card();

    const int getCardId() {return m_cardId; };
    const int getCardSize() {return m_cardSize; };
    const int getMaxNum() {return m_maxNumber; };
    int getCardNum(const int col, const int row);

};


#endif //BINGO_CARD_H
