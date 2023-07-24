#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    for(int i = 1; i < a; i++){
        if(b * i == a){
            cout << "yes";
            return 0;
        }
    }
    cout << "no";
    return 0;
}