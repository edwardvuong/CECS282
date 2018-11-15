#include <iostream>
#include "Card.hpp"
using namespace std;
int suit;
int rank;

Card::Card(){
    suit = 5;
    rank = 5;
}
void Card::setCard(int s, int r){
    suit = s;
    rank = r;
}
Card::Card(int s, int r){
    suit = s;
    rank = r;
}
int Card::getValue(){
    return rank;
}
void Card::displayCard(){
    string spaceForTen = " ";
    string suitNames[] = {"Spades", "Hearts", "Diamonds", "Clubs"};
    string rankNames[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    cout<< "    " <<rankNames[rank]<<" of "<<suitNames[suit];
    if(rankNames[rank] == "10")
        spaceForTen = "";
    else
        spaceForTen = " ";
    if (suitNames[suit] == "Clubs"){
         cout <<  ("\n -------\n[" + rankNames[rank] + spaceForTen + "     ]\n[   ♣   ]\n[♣  ♣  ♣]\n[  ♣♣♣  ]\n[   ♣   ]\n[   ♣   ]\n[   ♣ " + rankNames[rank] + spaceForTen + "]\n -------\n");
    }
    else if (suitNames[suit] == "Hearts"){
        cout <<  ("\n -------\n[" + rankNames[rank] + spaceForTen + "     ]\n[ ♥♥ ♥♥ ]\n[♥  ♥  ♥]\n[ ♥   ♥ ]\n[  ♥ ♥  ]\n[   ♥   ]\n[     " + rankNames[rank]  + spaceForTen + "]\n -------\n");
    }
    else if (suitNames[suit] == "Diamonds"){
         cout <<  ("\n -------\n[" + rankNames[rank] + spaceForTen + "     ]\n[   ♦   ]\n[  ♦ ♦  ]\n[ ♦   ♦ ]\n[  ♦ ♦  ]\n[   ♦   ]\n[     " + rankNames[rank]  + spaceForTen + "]\n -------\n");
    }
    else if (suitNames[suit] == "Spades"){
        cout <<  ("\n -------\n[" + rankNames[rank] + spaceForTen + "     ]\n[   ♠   ]\n[  ♠ ♠  ]\n[ ♠♠♠♠♠ ]\n[♠  ♠  ♠]\n[   ♠   ]\n[     " + rankNames[rank]  + spaceForTen + "]\n -------\n");

    }
}
