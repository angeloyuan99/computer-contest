#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x[n], y[n];
    x[0] = 0; y[0] = 0;
    for(int i = 1; i < n; i++){
        x[i] = 1001;
        y[i] = 1001;
    }
    int distinct = 0;
    for(int i = 1; i < n; i++){
        int number, inputx, inputy;
        cin >> number >> inputx >> inputy;
        if(n == 3){
            cout << number << " " << inputx << " " << inputy << "\n";
        }
        bool condition = true;
        for(int j = 0; j < n; j++){
            if(x[j] == inputx && y[j] == inputy){
                condition = false;
            }
        }
        if(condition){
            distinct++;
        }
        x[i] = x[number - 1] + inputx;
        y[i] = y[number - 1] + inputy;
    }
    cout << distinct + 1 << "\n";
}