 //I, O, S, H, Z, X, and N.
#include<iostream>
using namespace std;
int main(){
    string input;
    cin >> input;
    for(int i = 0; i < input.length(); i++){
        if(input[i] == 'S' || input[i] == 'O'||input[i] == 'I' || input[i] == 'H' || input[i] == 'Z' || input[i] == 'X' || input[i] == 'N'){
            continue;
        } else{
            cout << "NO\n";
            return 0;

        }
    }
    cout << "YES\n";
    return 0;

}