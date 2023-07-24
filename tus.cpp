#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int difa = b - a, difb = c - b;
    if(difa > difb){
        cout << difa - 1 << "\n";
    } else{
        cout << difb - 1 << "\n";
    }
}