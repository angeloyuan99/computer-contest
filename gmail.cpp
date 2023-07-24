#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> primes;
bool isPrime(int n){ 
    if (n <= 1){
        return false; 
    }
    if (n <= 3){
        return true; 
    }
    if (n % 2 == 0 || n % 3 == 0){
        return false;
    }
    for (int i = 5; i * i <= n; i = i + 6){
        if (n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}
void sieve(){ 
    bool marked[10000000/2 + 100] = {0}; 
    for (int i=1; i<=(sqrt(10000000)-1)/2; i++){ 
        for (int j=(i*(i+1))<<1; j<=10000000/2; j=j+2*i+1){
            marked[j] = true; 
        }
    }
    primes.push_back(2); 
    for (int i=1; i<=10000000/2; i++){
        if (marked[i] == false){
            primes.push_back(2*i + 1); 
        }
    }
} 
int main(){
    sieve();
    int no;
    cin >> no;
    for(int i = 0; i < no; i++){
        int n;
        cin >> n;
        n *= 2;
        for(int j = 0; j < primes.size(); j++){
            int temp = n - primes[j];
            if(binary_search(primes.begin(), primes.end(), temp)){
                cout << temp << " " << primes[j] << "\n";
                break;
            }
        }
    }
}

