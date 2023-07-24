#include<iostream>
using namespace std;
int main(){
    int k, n, multiplier = 1, sum = 0;
    cin >> k >> n;
    for(int i = 0; i < n + 1; i++){
        sum += multiplier * k;
        multiplier *= 10;
    }
    cout << sum << "\n";
}