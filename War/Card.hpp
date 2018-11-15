#ifndef CARD_H
#define CARD_H

class Card {
private:
    int suit;
    int rank;
public:
    Card();
    void setCard(int s, int r);
    Card(int s, int r);
    int getValue();
    void displayCard();
};

#endif
