#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(abs(b - c) == 2 || abs(a - b) == 2){
        cout << "1\n";
    } else if(abs(b - c) == 1 && abs(a - b) == 1){
        cout << "0\n";
    } else{
        cout << "2\n";
    }
    int larger = max(abs(a - b), abs(b - c));
    // if(larger == 1){
    //     cout << a << " " << " " << b << " " << c << "\n";
    //     return 0;
    // }
    cout << larger - 1 << "\n";
}