#include<iostream>
using namespace std;
int main(){
    int k;
    string word;
    cin >> k;
    cin >> word;
    for(int i = 0; i < word.length(); i++){
        char letter = word[i];
        int bignum = 3 * (i + 1) + k;
        for(int j = 0; j < bignum; j++){
            if(letter == 'A'){
                letter = 'Z';
                continue;
            }
            letter = letter - 1;
        }
        cout << letter;
    }
    cout << "\n";
    return 0;
}