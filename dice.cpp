#include<iostream>
using namespace std;
int main(){
    int a, a1 = 100, b1 = 100;
    cin >> a;
    for(int i = 0; i < a; i++){
        int a, b;
        cin >> a >> b;
        if (a > b){
            b1 -= a;
        } else if(a < b){
            a1 -= b;
        }
    }
    cout << a1 << "\n" << b1;
}