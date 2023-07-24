#include<iostream>
using namespace std;
int main(){
    string clubs, diamonds, hearts, spades, temp, input;
    int clubLoc = 0, diamondLoc = 0, heartLoc = 0, spadeLoc = 0, cp = 0, dp = 0, hp = 0, sp = 0, pAdded = 0;
    cin >> input;
    for(int i = 0; i < input.length(); i++){
        if(input[i] == 'C'){
            clubLoc = i;

        }else if(input[i] == 'D'){
            diamondLoc = i;

        } else if(input[i] == 'H'){
            heartLoc = i;
        } else if(input[i] == 'S'){
            spadeLoc = i;
        }
    }
}