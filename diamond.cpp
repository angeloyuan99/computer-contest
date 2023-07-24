#include<iostream>
#include<string>
using namespace std;
int main(){
    for(int i = 0; i < 5; i++){
        string input;
        cin >> input;
        int spaces = input.length() - 1;
        for(int j = 0; j < input.length(); j++){
            for(int k = 0; k < spaces; k++){
                cout << " ";
            }
            spaces--;
            if(j == input.length() - 1){
                cout << input[j];
                break;
            }
            cout << input[j] << "\n";
        }
        spaces++;
        for(int j = input.length() - 2; j > -1; j--){
            for(int k = 0; k < spaces; k++){
                cout << " ";
                spaces++;
            }
            if(j == 0){
                cout << input[j];
                break;
            }
            cout << input[j] << "\n";
        }
    }
}