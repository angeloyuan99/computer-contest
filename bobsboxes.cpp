#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a % 2 == 0){
        cout << (a/2 * b) + (a/2 * c) << "\n";
    } else{
        cout << (((a - 1) / 2 + 1) * b) + ((a - 1) / 2 * c)  << "\n";
    }
    return 0;
}