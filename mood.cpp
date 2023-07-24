#include<iostream>
using namespace std;
int main(){
    string alphabet, word;
    cin >> alphabet >> word;
    int index = 0, counter = 1;
    while(index != word.length() - 1){
        for(int i = 0; i < alphabet.length(); i++){
            if(alphabet[i] == word[index]){
                index++;
            }
        }
        counter++;
    }
    cout << counter << "\n";
}