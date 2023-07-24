#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
vector<int> primes;
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
    for(int i = 0; i < 5; i++){
        int n;
        cin >> n;
        if(binary_search(primes.begin(), primes.end(), n)){
            int index = lower_bound(primes.begin(), primes.end(), n) - primes.begin();
        //    cout << primes[index] << "\n" << primes[index - 1] << " " << primes[index - 2] << "\n";
            if(primes[index] - primes[index - 2]< primes[index + 2] - primes[index]){
                cout << primes[index - 2];
            } else if((primes[index] - primes[index - 2]) > (primes[index + 2] - primes[index]) || (primes[index] - primes[index - 2] == (primes[index + 2] - primes[index]))){
                cout << primes[index + 2] << "\n";
            }
        } else{
            int index = lower_bound(primes.begin(), primes.end(), n) - primes.begin();
         //   cout << primes[index + 1] << " " << primes[index - 2] << "\n" << n - primes[index - 2] << " " << primes[index + 1] - n << "\n";
            if(n - primes[index - 2]< primes[index + 1] - n){
                cout << primes[index - 2];
            } else if((n - primes[index - 2]) > (primes[index + 1] - n) || (n - primes[index - 2] == (primes[index + 1] - n))){
                cout << primes[index + 1] << "\n";
            }
        }
    }
}
// 5
// 6
// 7
// 8
// 9