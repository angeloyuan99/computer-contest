#include<iostream>
using namespace std;
int main(){
    int input, dotnum = 1;
    cin >> input;
    for(int i = 0; i < input * 2; i += 2){
        for(int i = 0; i < dotnum; i++){
            int num = input * 2;
            cout << "*";
            num -= dotnum * 2;
            for(int j = 0; j < num; j++){
                cout << " ";
            }
            cout << "*" << "\n";
        }
        cout << "\n";
        dotnum += 2;
    }
    return 0;
}