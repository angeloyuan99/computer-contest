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
        cout << 9 + stoll(input) - 99 << "\n";
    } else if(input.length() == 4){
        cout << 909 << "\n";
    } else if(input.length() == 5){
        cout << 909 + stoll(input) - 9999 << "\n";
    } else if(input.length() == 6){
        cout << 90909 << "\n";
    } else if(input.length() == 7){
        cout << 90909 + stoll(input) - 999999 << "\n";
    } else if(input.length() == 8){
        cout << 9090909 << "\n";
    } else if(input.length() == 9){
        cout << 9090909 + stoll(input) - 99999999 << "\n";
    } else if(input.length() == 10){
        cout << 909090909 << "\n";
    } else if(input.length() == 11){
        cout << 909090909 + stoll(input) - 9999999999 << "\n";
    } else if(input.length() == 12){
        cout << 90909090909 << "\n";
    } else if(input.length() == 13){
        cout << 90909090909 + stoll(input) - 999999999999 << "\n";
    } else if(input.length() == 14){
        cout << 9090909090909 << "\n";
    } else if(input.length() == 15){
        cout << 9090909090909 + stoll(input) - 99999999999999 << "\n";
    } else if(input.length() == 16){
        cout << 909090909090909 << "\n";
    } else if(input.length() == 17){
        cout << 909090909090909 + stoll(input) - 9999999999999999 << "\n";
    } else if(input.length() == 18){
        cout << 90909090909090909 << "\n";
    } else if(input.length() == 19){
        cout << 90909090909090909 + stoll(input) - 999999999999999999 << "\n";
    }
}