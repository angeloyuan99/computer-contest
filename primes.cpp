#include<iostream>
#include<math.h>
using namespace std;
void primeFactors(long long n)  {  
    long long counter = 0;
    while (n % 2 == 0){
        counter += 2;
        //cout << 2 << "\n";
        n = n/2;  
    }
    for (long long i = 3; i <= sqrt(n); i = i + 2){
        while (n % i == 0){
            counter+=i;
       //     cout << i << "\n";
            n = n/i;

        }
    }
    if (n > 2){
        counter+=n;
        //cout << n << "\n";
    }
    cout << counter << "\n";    
}  
int main(){
        long long n;
        cin >> n;
        primeFactors(n);
}