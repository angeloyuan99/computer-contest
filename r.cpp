#include<iostream>
using namespace std;
int main(){
    int s;
    cin >> s;
    for(int i = 0; i < s - 1; i++){
        cout << "#";
    }
    cout << ".\n";
    for(int i = 0; i < s - 2; i++){
        cout << "#";
        for(int j = 0; j < s - 2; j++){
            cout << ".";
        }
        cout << "#\n";
    }
    for(int i = 0; i < s - 1; i++){
        cout << "#";
    }
    cout << ".\n";
    cout << "##";
    for(int j = 0; j < s - 2; j++){
        cout << ".";
    }
    cout << "\n";
    for(int i = 2; i < s; i++){
        cout << "#";
        for(int j = 0; j < i - 1; j++){
            cout << ".";
        }
        cout << "#";
        for(int j = 0; j < (s - 1) - i; j++){
            cout << ".";
        }
        cout << "\n";
    }
}