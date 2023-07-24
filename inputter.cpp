#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    cin >> input;
    if(input.length() == 1){
        cout << input << "\n";
    } else if(input.length() == 2){
        cout << 9 << "\n";
    } else if(input.length() == 3){
        cout << 10 + stoi(input) - 100;
    } else if(input.length() == 4){
        cout << 909 << "\n";
    } else if(input.length() == 5){
        cout << 909 + stoi(input) - 10000 << "\n";
    } else if(input.length() == 7){
        cout << 1110 + stoi(input) - 1000000;
    } else if(input.length() == 9){
        cout << 11110 + stoi(input) - 100000000;
    } else if(input.length() == 11){
        cout << 111110 + stoi(input) - 10000000000;
    } else if(input.length() == 13){
        cout << 1111110 + stoi(input) - 1000000000000;
    } else if(input.length() == 15){
        cout << 11111110 + stoi(input) - 100000000000000;
    } else if(input.length() == 17){
        cout << 111111110 + stoi(input) - 10000000000000000;
    } else if(input.length() == 19){
        cout << 1111111110 + stoi(input) - 1000000000000000000;
    }
}