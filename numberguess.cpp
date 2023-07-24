#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int celing = n;
    int floor = 0;
    int guess = n / 2;
    cout << "Guess: " << guess << "\n";
    while(true){
        string input;
        cin >> input;
        if(input == "Higher"){
            floor = guess;
            guess = guess + (celing - guess) / 2;
            cout << "Guess: " << guess << "\n";
        } else if(input == "Lower"){
            celing = guess;
            guess = guess - (guess - floor) / 2;
            cout << "Guess: " << guess << "\n";
        } else if(input == "Right"){
            return 0;
        }
    }
}
//196425