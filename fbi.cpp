#include<iostream>
using namespace std;
long fib(long n){
    if(n <= 2){
        return 1;
    } 
    return(fib(n - 1) + fib(n - 2));
}
long memo[1000000000];
long fib2(long n){
    if(memo[n] > 0){
        return memo[n];
    }
    if(n <= 2){
        return 1;
    } 
    memo[n] = fib2(n - 1) + fib2(n - 2); 
    return memo[n];
}
int main(){
    long n;
    cin >> n;
    cout << fib(n) << "\n";
    cout << fib2(n) << "\n";
}