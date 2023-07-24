#include<iostream>
using namespace std;
long fib(long n){
    long table[n + 1];
    for(long i = 0; i < n + 1; i++){
        table[i] = 0;
    }
    table[1] = 1;
    for(long i = 0; i <= n; i++){
        table[i + 1] += table[i];
        table[i + 2] += table[i];
    }
    return table[n];
}
int main(){
    long n;
    cin >> n;
    cout << fib(n) << "\n";
}