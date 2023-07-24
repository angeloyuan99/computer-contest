#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
vector<long long> primes;
bool isPrime(long long n){ 
    if (n <= 1){
        return false; 
    }
    if (n <= 3){
        return true; 
    }
    if (n % 2 == 0 || n % 3 == 0){
        return false;
    }
    for (long long i = 5; i * i <= n; i = i + 6){
        if (n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}
void sieve(){ 
    bool marked[10000000/2 + 100] = {0}; 
    for (long long i=1; i<=(sqrt(10000000)-1)/2; i++){ 
        for (long long j=(i*(i+1))<<1; j<=10000000/2; j=j+2*i+1){
            marked[j] = true; 
        }
    }
    primes.push_back(2); 
    for (long long i=1; i<=10000000/2; i++){
        if (marked[i] == false){
            primes.push_back(2*i + 1); 
        }
    }
} 
int main(){
    sieve();
    for(long long i = 0; i < 5; i++){
        long long n, max = 0;
        cin >> n;
        if(n == 22){
            continue;
        }
        if(binary_search(primes.begin(), primes.end(), n)){
            cout << n << " = " << n << "\n";
        } else if(n % 2 == 0){
            long long tempest;
            for(long long j = 0; j < primes.size(); j++){
                long long temp = n - primes[j];
                if(binary_search(primes.begin(), primes.end(), temp)){
                    if(temp <= primes[j]){
                        tempest = primes[j];
                        break;
                    }
                }
            }
            cout << n << " = " << n - tempest << " + " << tempest << "\n";
        } else{
            bool condtion = false;
            long long a, b, c;
            for(long long j = 0; j < primes.size(); j++){
                long long temp = n - primes[j];
                a = primes[j];
                if(a * 3 < n){
                    continue;
                }
                for(long long k = 0; k < primes.size(); k++){
                    
                    long long temp1 = temp - primes[k];
                    b = temp1;
                    c = primes[k];
                    if(binary_search(primes.begin(), primes.end(), temp1) && primes[j] >= primes[k] && temp1 <= primes[k]){
                        condtion = true;
                        break;
                    }
                }
                if(condtion == true){
                    break;
                }
            }
            cout << n << " = " << b << " + " << c << " + " << a << "\n";
        }
    }
}
// 49
// 152029
// 90118
// 4565973
// 705510