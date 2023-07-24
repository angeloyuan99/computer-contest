#include<iostream>
using namespace std;
int main(){
    int a, b, u, d;
    cin >> a >> b >> u >> d;
    if(a >= b){
        cout << (a - b) * d;
    } else if(b >= a){
        cout << (b - a) * u;
    }
}