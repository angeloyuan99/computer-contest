#include<iostream>
using namespace std;
int main(){
    float a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    for(int i = 0; i <= c; i++){
        cout << i << " " << a * (b / 100) << ".";
        if(b / 100 == 0){
            cout << "00";
        } else if(){
            
        }
        a = a * (b / 100);
        }
}