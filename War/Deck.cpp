#include <iostream>
#include "Card.hpp"
#include "Deck.hpp"
#include <stdlib.h>
#include "time.h"
using namespace std;

Card cards[52];
int cardCount;

Deck::Deck(){
    int i = 0;
    for(int s=0;s<4;s++){
        for(int r=0;r<13;r++){
            cards[i].setCard(s,r);
            i++;
        }
    }
    cardCount = 52;
}

void Deck::showDeck(){
    for (int i =0; i < cardCount; i++){
        cards[i].displayCard();
        cout << endl;
    }
}

int Deck::deal(){
    if(cardCount <= 0){
        return 0;
    }
    else {
        cardCount--;
        cards[cardCount].displayCard();
        return cards[cardCount].getValue();
    }
}

int Deck::cardsLeft(){
    return cardCount;
}

void Deck::shuffle(){
    srand(unsigned(time(NULL)));
    for (int i = 0; i < 52; i++){
        int temp = rand()%52;
        Card swap = cards[i];
        cards[i] = cards[temp];
        cards[temp] = swap;
    }
}
