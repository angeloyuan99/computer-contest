#include<iostream>
using namespace std;
bool palindromecheck(string input){
    for(int l = 0, r = input.length(); l < r; l++, r--){
        if(input[l] != input[r]){
            return false;
        }
    }
    return true;
}
int main(){
    string input;
    cin >> input;
    int highestlength = 1;
    for(int i = 0; i < input.length(); i++){
        for(int j = 0; j < input.length(); j++){
            if(palindromecheck(input.substr(i, j)) == true && input.substr(i, j).length() > highestlength){
                highestlength = input.substr(i, j).length();
            }
        }
    }
    if(palindromecheck(input) == true && input.length() > highestlength){
        highestlength = input.length();
    }
    cout << highestlength << "\n";
}