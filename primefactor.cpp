#include<iostream>
#include<math.h>
using namespace std;
long long maxPrimeFactors(long long n) { 
    long long maxPrime = -1; 
    while(n % 2 == 0) { 
        n /= 2;
        cout << 2 << " ";
    } 
    for (int i = 3; i <= sqrt(n); i += 2) { 
        while (n % i == 0) { 
            cout << i << " ";
            n = n / i; 
        } 
    } 
    if (n > 2){
        cout << n << " ";
    }
    cout << "\n";
    return maxPrime; 
} 
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        maxPrimeFactors(arr[i]);
    }
}