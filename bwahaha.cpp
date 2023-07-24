#include<math.h>
#include<iostream>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    long long a = n / k;
    cout << min(n - (a * k), abs(n - (a * k) - k));
}