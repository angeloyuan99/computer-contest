#include<iostream>
#include<tgmath.h>
using namespace std;
int main(){
    for(int i = 0; i < 5; i++){
        unsigned long long n;
        cin >> n;
        unsigned long long power = 1;
        while(power <= n){
            power*=2;
        }
        
        cout << power << "\n";
    }
}