#include<iostream>
using namespace std;
int main(){
    int small, medium, large;
    cin >> small >> medium >> large;
    if(small + medium * 2 + large * 3 >= 10){
        cout << "happy\n";
        return 0;

    }
    cout << "sad\n";
    return 0;
}