#include<iostream>
using namespace std;
int main(){
    int a, b, sequencelength = 3;
    cin >> a >> b;
    while(true){
        int num = a - b;
        if(num > b){
            cout << sequencelength << "\n";
            return 0;
        }
        a = b;
        b = num;
        sequencelength++;
    }
    return 0;
}