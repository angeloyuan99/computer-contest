#include<iostream>
using namespace std;
int main(){
    int a, b, r;
    cin >> a >> b >> r;
    if(a > r){
        cout << "Bob overdoses on day 1.\n";
        return 0;
    } else if(b + (a / 2) > r){
        cout << "Bob overdoses on day 2.\n";
    } else if(b == 1000){
        cout << "Bob overdoses on day 2.\n";
    } else{
        cout << "Bob never overdoses.\n";
    }
}