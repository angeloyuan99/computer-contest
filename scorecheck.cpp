#include<iostream>
using namespace std;
int main(){
    cout << "Cards Dealt \t\t Points\n";
    string input;
    cin >> input;
    int i = 0;
    int points;
    cout << "Clubs  ";
    while(input[i] != 'D'){
        cout << input[i] << " ";
        
        i++;
    }
}