#include<iostream>
using namespace std;
int main(){
    int counterw = 0, countl = 0;
    for(int i = 0; i < 6; i++){
        char a;
        cin >> a;
        if(a == 'W'){
            counterw++;
        } else{
            countl++;
        }
    }
    if(counterw >= 5){
        cout << "1";
    } else if(counterw > 2){
        cout << "2";
    } else if(counterw > 0){
        cout << "3";
    } else{
        cout << "-1";
    }
}