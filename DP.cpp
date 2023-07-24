#include <iostream>
#include <vector>
#include "timing.h"
using namespace std;


int fibinoacci(int n){
    vector <int> numbers;
    numbers.push_back(0);
    numbers.push_back(1);
    for(int i = 1; i < n; i++){
        numbers.push_back(numbers[numbers.size() - 1] + numbers[numbers.size() - 2]);
        // cout << numbers[numbers.size() - 1] << "\n";
    }
    return numbers.back();
}

vector<int> lookup(100,-1);
int fib2(int n) {
    if (n <= 1) return n;

    if(lookup[n] != -1) return lookup[n];
    return lookup[n] = fib2(n - 1) + fib2(n - 2);
}

int fib(int n) {
    if (n <= 1) return n;

    return fib(n - 1) + fib(n - 2);
}

int fib3(int n) {
    int lookup[n+1];

    lookup[0] = 0;
    lookup[1] = 1;

    for(int i=2; i<=n; i++) {
        lookup[i] = lookup[i-1] + lookup[i - 2];
    }
    return lookup[n];
}

int fib4(int n) {
    int i1 = 0;
    int i2 = 1;
    int v;
    for(int i=2; i<=n; i++) {
        v = i1 + i2;
        i1 = i2;
        i2 = v;
    }
    return v;
}
int steps(int i,int n){
    if(i == n){
        return 1;
    }
    if(i > n){
        return 0;
    }
    return steps(i + 1, n) + steps (i + 2, n);
}
int main(){
    timing_begin();
    cout << fibinoacci(90) << "\n";
    timing_end();

    // timing_begin();
    // cout << fib(90) << "\n";
    // timing_end();

    timing_begin();
    cout << fib2(90) << "\n";
    timing_end();



    timing_begin();
    cout << fib3(90) << "\n";
    timing_end();

    timing_begin();
    cout << fib4(41) << "\n";
    timing_end();
    
    timing_begin();
    cout << steps(0,40) << "\n";
    timing_end();
}//0 1 1 1 2 2