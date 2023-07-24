#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
vector<long long> primes;
void sieve(){ 
    bool marked[2000000/2 + 100] = {0}; 
    for (long long i=1; i<=(sqrt(2000000)-1)/2; i++){ 
        for (long long j=(i*(i+1))<<1; j<=2000000/2; j=j+2*i+1){
            marked[j] = true; 
        }
    }
    primes.push_back(2); 
    for (long long i=1; i<=2000000/2; i++){
        if (marked[i] == false){
            primes.push_back(2*i + 1); 
        }
    }
} 
int main(){
    long long n, asdf[2000000];
    sieve();
    for(long long i = 0; i < primes.size(); i++){
        asdf[primes[i]] += primes[i];
       // cout << asdf[primes[i]] << "\n";
    }
    for(long long i = 1; i < 2000000; i++){
        asdf[i] += asdf[i - 1]; 
    }
    cin >> n;
    for(long long i = 0; i < n; i++){
        long long a, b;
        cin >> a >> b;
        cout << asdf[b] - asdf[a - 1] << "\n";
    }
}