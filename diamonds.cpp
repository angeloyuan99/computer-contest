#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i < 5; i++){
        string input;
        cin >> input;
        int initialspaces = input.length() - 1;
        for(int j = 0; j < input.length(); j++){
            for(int k = 0; k < initialspaces; k++){
                cout << " ";
            }
            initialspaces--;
            cout << input[j];
            for(int k = 0; k < j * 2 - 1; k++){
                cout << " ";
            }
            if(j != 0){
                cout << input[j];
            }
            cout << "\n";
        }
        initialspaces = 1;
        for(int j = input.length() - 1; j >= 0; j--){
            for(int k = 0; k < initialspaces; k++){
                cout << " ";
            }
        }
    }
}