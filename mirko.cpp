#include<iostream>
using namespace std;
int main(){
    int kings, queens, rooks, bishops, knights, pawns;
    cin >> kings >> queens >> rooks >> bishops >> knights >> pawns;
    if(kings > 1){
        cout << "-" << kings - 1 << " ";
    } else if(kings < 1){
        cout << 1 - kings << " ";
    } else{
        cout << "0 ";
    }
    if(queens > 1){
        cout << "-" << queens - 1 << " ";
    } else if(queens < 1){
        cout << 1 - queens << " ";
    } else{
        cout << "0 ";
    }
    if(rooks > 2){
        cout << "-" << rooks - 2 << " ";
    } else if(rooks < 2){
        cout << 2 - rooks << " ";
    } else{
        cout << "0 ";
    }
    if(bishops > 2){
        cout << "-" << bishops - 2 << " ";
    } else if(bishops < 2){
        cout << 2 - bishops << " ";
    } else{
        cout << "0 ";
    }
    if(knights > 2){
        cout << "-" << knights - 2 << " ";
    } else if(knights < 2){
        cout << 2 - knights << " ";
    } else{
        cout << "0 ";
    }
    if(pawns > 8){
        cout << "-" << pawns - 8 << " ";
    } else if(pawns < 8){
        cout << 8 - pawns << " ";
    } else{
        cout << "0 ";
    }
}