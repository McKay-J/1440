//
// Created by McKay Jensen on 2/27/17.
//

#ifndef BINGO_CARD_HPP
#define BINGO_CARD_HPP
#include <vector>

class Card {

    friend class Deck;
    friend class CardTester;

public:
    ~Card();
    Card(int cardSize, int cardAddress, int maxNumber);
    void shuffleNumbers(std::vector<std::vector<int>>& vec);

    const int cardSize() { return m_cardSize; }
    const int getAddress() { return m_address; }
    const int getMaxNum() { return max_number; }

    int getCardNum(const int col, const int row);

private:
    const int m_cardSize;
    const int m_address;
    const int max_number;
    std::vector<std::vector<int>> m_card;
};


#endif //BINGO_CARD_HPP
