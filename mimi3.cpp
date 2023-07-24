#include<algorithm>
#include<math.h>
#include<iostream>
using namespace std;
bool prime[10000000 + 1];
long long gcd(long long a, long long b){
    if (a == 0){
        return b;
    }
    return gcd(b % a, a);
}
long long findGCD(long long arr[], long long n){
    long long result = arr[0];
    for (long long i = 1; i < n; i++){
        result = gcd(arr[i], result);
 
        if(result == 1){
           return 1;
        }
    }
    return result;
}
long long maxPrimeFactors(long long n){
    long long maxPrime = -1;
    while (n % 2 == 0) {
        maxPrime = 2;
        n >>= 1; 
    }
     while (n % 3 == 0) {
        maxPrime = 3;
        n = n / 3;
    }
    for (long long i = 5; i <= sqrt(n); i += 6) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
      while (n % (i+2) == 0) {
            maxPrime = i+2;
            n = n / (i+2);
        }
    }
    if (n > 4)
        maxPrime = n;
 
    return maxPrime;
}
 
int main(){
    long long n;
    cin >> n;
    long long arr[n];
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long gcd = maxPrimeFactors(findGCD(arr, n));
    if(gcd == -1){
        cout << "DNE\n";
    } else{
        cout << gcd << "\n";
    }
}