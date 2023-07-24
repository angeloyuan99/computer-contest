#include<iostream>
using namespace std;
int main(){
    long long n, duke = 0, alice = 0;
    cin >> n;
    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        if(a % 2 == 0){
            duke += (a/2);
        } else{
            alice += (((a - 1) / 2) + 1);
        }
    }
    if(duke > alice){
        cout << "Duke\n";
    } else{
        cout << "Alice\n";
    }
}