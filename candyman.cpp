#include<iostream>
using namespace std;
int odd_digits(long long n){
    if (n < 10){
        return n;
    }
    else if (n / 10 < 10){
        return 9;
    }
    else if (n / 100 < 10){
        return 9 + n - 99;
    }
    else if (n / 1000 < 10){
        return 9 + n - 900;
    }
    else if (n / 10000 < 10){
        return 909 + n - 9999;
    }
    else if(n / 100000 < 10){
        return 90909 + n - 99999;
    } 
}
int main(){
    long long a;
    cin >> a;
    cout << odd_digits(a);
}