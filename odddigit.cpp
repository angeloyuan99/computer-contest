#include<iostream>
using namespace std;
int main(){
    unsigned long long a;
    cin >> a;
    if(a < 10){
        cout << a << "\n";
    } else if(a <= 99){
        cout << 9 << "\n";
    } else if(a <= 999){
        cout << 9 + (a - 99);
    } else if(a <= 9999){
        cout << 909 << "\n";
    } else if(a <= 99999){
        cout << 909 + (a - 9999);
    } else if(a <= 999999){
        cout << 90909 << "\n";
    } else if(a <= 9999999){
        cout << 90909 + (a - 999999);
    } else if(a <= 99999999){
        cout << 9090909 << "\n";
    } else if(a <= 999999999){
        cout << 9090909 + (a - 99999999);
    } else if(a <= 9999999999){
        cout << 909090909 << "\n";
    } else if(a <= 99999999999){
        cout << 909090909 + (a - 9999999999);
    } else if(a <= 999999999999){
        cout << 90909090909 << "\n";
    } else if(a <= 9999999999999){
        cout << 90909090909 + (a - 999999999999);
    } else if(a <= 99999999999999){
        cout << 9090909090909 << "\n";
    } else if(a <= 999999999999999){
        cout << 9090909090909 + (a - 99999999999999);
    } else if(a <= 9999999999999999){
        cout << 909090909090909 << "\n";
    } else if(a <= 99999999999999999){
        cout << 909090909090909 + (a - 9999999999999999);
    } else if(a <= 999999999999999999){
        cout << 90909090909090909 << "\n";
    } else if(a <= 9999999999999999999){
        cout << 90909090909090909 + (a - 999999999999999999);
    } else if(a <= 99999999999999999999){
        cout << 9090909090909090909 << "\n";
    }
}