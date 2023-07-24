#include <iostream>
using namespace std;
int main()
{
    string card;
    int lastA = 0, lastB = 0, counter = 55;
    int A = 0, B = 0;
    
    for(int i = 0; i < 52; i++){
        getline(cin, card);
        if(i%2 == 0){
//            A card
            if(card == "ace"){
                lastA = 4;
                lastB = 0;
                counter = 4;
            }
            else if(card == "king"){
                lastA = 3;
                lastB = 0;
                counter = 3;    
            }
            else if(card == "queen"){
                lastA = 2;
                lastB = 0;
                counter = 2;
            }
            else if(card == "jack"){
                lastA = 1;
                lastB = 0;
                counter = 1;
            }
            else counter--;
        }
        else{
//            B card
            if(card == "ace"){
                lastB = 4;
                lastA = 0;
                counter = 4;
            }
            else if(card == "king"){
                lastB = 3;
                lastA = 0;
                counter = 3;
            }
            else if(card == "queen"){
                lastB = 2;
                lastA = 0;
                counter = 2;
            }
            else if(card == "jack"){
                lastB = 1;
                lastA = 0;
                counter = 1;
            }
            else counter--;
        }
        if(counter == 0){
            if(lastB == 0){
                A += lastA;
                cout<<"Player A scores "<<lastA<<" point(s)."<<endl;
                counter = 55;
            }
            if(lastA == 0){
                B += lastB;
                cout<<"Player B scores "<<lastB<<" point(s)."<<endl;
                counter = 55;
            }
        }
    }
    cout<<"Player A: "<<A<<" point(s)."<<endl;
    cout << "Player B: " << B << " points(s).";
    return 0;
}
