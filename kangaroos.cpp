#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int difference1 = b - a, difference2 = c - b;
    if(difference1 > difference2){
        cout << difference1 - 1 << "\n";
    } else{
        cout << difference2 - 1 << "\n";
    }
}s