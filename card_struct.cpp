//
//  card_struct.cpp
//  Lesson 13
//
//  Created by Cindy Qi Li on 2018-12-02.
//  Copyright © 2018 Cindy Qi Li. All rights reserved.
//

#include<iostream>
using namespace std;
class Card{
    string rank, suit;
    public:
    void printCard(){
        cout<<"Rank:  "<<rank<<endl;
        cout<<"Suit:  "<<suit<<endl;
    }
};
struct Deck{
    Card cArr[52];

    public:

    void printDeck(){
    }
};
int main()
{
    Deck d1;
    
}

