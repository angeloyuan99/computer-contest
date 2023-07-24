#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        int inputlen;
        cin >> inputlen;
        char chararr[inputlen * 2];
        for(int i = 0; i < inputlen * 2; i++){
            cin >> chararr[i];
        }
        for(int i = inputlen, j = inputlen * 2; i > 0; i--, j--){
            cout << chararr[j - 1] << chararr[i - 1];
        }
        cout << "\n";
    }
    return 0;
}