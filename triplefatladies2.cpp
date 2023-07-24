#include<iostream>
using namespace std;
int main(){
    int t;
    for(int i = 0; i < t; i++){
        int k;
        cin >> k;
        while(true){
            int mult = k * k * k;
            while(true){
                mult %= 10;
                if(mult == 888){
                    cout << k << "\n";
                    break;
                } else if(mult <= 1000){
                    break;
                }
            }
            if(mult == 888){
                break;
            }
            k++;
        }
    }
}