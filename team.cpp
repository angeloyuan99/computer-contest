#include<iostream>
using namespace std;
int main(){
    string n;
    cin >> n;
    for(int i = 0; i < 5; i++){
        string input;
        cin >> input;
        if(n == input){
            cout << "Y" << "\n";
            return 0;

        }
    }
    cout << "N" << "\n";
    return 0;
}