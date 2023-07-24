#include<iostream>
using namespace std;
int main(){
    int n, highest = 0;
    string winner;
    cin >> n;
    for(int i = 0; i < n; i++){
        string name;
        int input;
        cin >> name >> input;
        if(input > highest){
            highest = input;
            winner = name;
        }
    }
    cout << winner << "\n";
    return 0;
}