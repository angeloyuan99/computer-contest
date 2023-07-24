#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        for(int j = 0; j < input.size(); j++){
            if(input[j] == '-'){
                input = input.substr(0, j) + input.substr(j + 1, input.size());
            }
        }
        if(input.size() > 10){
            input = input.substr(0, 10);
        }
        for(int j = 0; j < input.length(); j++){
            if(input[j] == 'A' || input[j] == 'B' || input[j] == 'C'){
                input[j] = '2';
            } else if(input[j] == 'D' || input[j] == 'E' || input[j] == 'F'){
                input[j] = '3';
            } else if(input[j] == 'G' || input[j] == 'H' || input[j] == 'I'){
                input[j] = '4';
            } else if(input[j] == 'J' || input[j] == 'K' || input[j] == 'L'){
                input[j] = '5';
            } else if(input[j] == 'M' || input[j] == 'N' || input[j] == 'O'){
                input[j] = '6';
            } else if(input[j] == 'P' || input[j] == 'Q' || input[j] == 'R' || input[j] == 'S'){
                input[j] = '7';
            } else if(input[j] == 'T' || input[j] == 'U' || input[j] == 'V'){
                input[j] = '8';
            } else if(input[j] == 'W' || input[j] == 'X' || input[j] == 'Y' || input[j] == 'Z'){
                input[j] = '9';
            }
            cout << input[j];
            if(j == 2 || j == 5){
                cout << "-";
            }
        }
        cout << "\n";
    }
}
