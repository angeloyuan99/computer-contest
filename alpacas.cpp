#include<iostream>
using namespace std;
int main(){
    int s, r;
    cin >> s >> r;
    if(s * s > ((r * r)* 3.14)){
        cout << "SQUARE\n";
    } else{
        cout << "CIRCLE\n";
    }
}
