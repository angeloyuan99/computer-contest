#include<iostream>
using namespace std;
int main(){
    int k;
    cin >> k;
    for(int j = 0; j < k; j++){
        for(int i = 0; i < k; i++){
            cout << "*";
        }
        for(int i = 0; i < k; i++){
            cout << "x";
        }
        for(int i = 0; i < k; i++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i = 0; i < k; i++){
        for(int j = 0; j < k; j++){
            cout << " ";
        }
        for(int j = 0; j < k * 2; j++){
            cout << "x";
        }
        cout << "\n";
    }
    for(int i = 0; i < k; i++){
        for(int j = 0; j < k; j++){
            cout << "*";
        }
        for(int j = 0; j < k; j++){
            cout << " ";
        }
        for(int j = 0; j < k; j++){
            cout << "*";
        }
        cout << "\n";
    }
}