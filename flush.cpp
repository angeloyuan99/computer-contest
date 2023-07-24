#include<iostream>
using namespace std;
int main(){
    long long lower = 0, higher = 2000000000;
    for(int i = 0; i < 32; i++){
        cout << lower + (higher - lower) / 2;
        cout.flush();
        string check;
        cin >> check;
        if(check == "stinks"){
            lower = lower + (higher - lower) / 2;
        } else if(check == "floats"){
            higher = lower + (higher - lower) / 2;
        }
    }
}