#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        int b, c;
        cin >> b >> c;
        if(c == 1 && b < 7){
            cout << "bad\n";
        }else if(b == 1){
            cout << "bad\n";
        }else if((b >= 4 || c >= 4)){
            cout << "good\n";
        }else{
            cout << "bad\n";
        }
    }
    return 0;

}