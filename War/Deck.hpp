#include "Card.hpp"
#ifndef DECK_H
#define DECK_H

class Deck{
private:
    Card cards[52];
    int cardsCount;
public:
    Deck();
    void showDeck();
    int deal();
    int cardsLeft();
    void shuffle();
    void refreshDeck();
};

#endif
