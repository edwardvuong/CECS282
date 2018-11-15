/**
 * Name: Edward Vuong
 * Program 1: War
 * CECS 282: C++ for Java Programmers
 * Due: September 20, 2017
 */
#include <iostream>
#include "Deck.hpp"
#include "Card.hpp"
using namespace std;

int main(){
    Deck deck;
    int main = true;
    int player1 = 0;
    int player2 = 0;
    int menuChoice;
    while(main != false){
        cout << "1) Get a new card deck\n2) Show all cards in the deck\n3) Shuffle\n4) Play WAR!\n5) Exit\n";
        cin >> menuChoice;
        if(menuChoice == 1){
                deck = Deck();
                cout <<"You now have a new deck!\n";
            }
        else if(menuChoice == 2){
                cout <<"There are " <<  deck.cardsLeft() << " cards in the deck.\n";
                deck.showDeck();
            }
        else if(menuChoice == 3){
                deck.shuffle();
                cout <<"Shuffled";
            }
        else if(menuChoice == 4){
                cout <<"Get ready to play WAR!!!\n";
                cout <<"There are " <<  deck.cardsLeft() << " cards in the deck.\n";
                int game = true;
                while(game){
                    cout <<"...dealing...\n";
                    cout <<"\nOne for you...\n";
                    player1 += deck.deal();
                    cout <<"\nOne for me...\n";
                    player2 += deck.deal();
                    cout <<"\nOne for you...\n";
                    player1 += deck.deal();
                    cout <<"\nOne for me...\n";
                    player2 += deck.deal();
                    cout <<"\n\n";
                    if(player1 == player2)
                        cout << "Tie game";
                    else if(player1 > player2)
                        cout << "You win \n ";
                    else
                        cout << "I win!\n";
                    cout << "\nThere are " << deck.cardsLeft() << " cards in the deck.\n";
                    
                    if(!deck.cardsLeft())
                        game = false;
                    else {
                        cout<<"Wanna play again? (yes)\n";
                        string playAgain;
                        cin >> playAgain;
                        
                        if (playAgain == "yes" || playAgain == "y"){
                            cout<<"\nThere are " << deck.cardsLeft() << " cards in the deck.\n";
                            game = true;
                        }
                        else{
                            cout << "Thanks for playing.";
                            game = false;
                            break;
                        }
                    }
                }
            }
        else if(menuChoice == 5){
                cout<<"Thanks for playing.";
                main = false;
                break;
            }
    }
    return 0;
}
