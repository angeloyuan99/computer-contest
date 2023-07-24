#include<iostream>
using namespace std;
int prime[100009];
void SieveOfEratosthenes(int n){
    for(int i = 0; i < 100009; i++){
        prime[i] = 1;
    }
    prime[0] = 0;
    prime[1] = 0;
    for (int p = 2; p * p <= n; p++){
        if (prime[p] == 1){
            for (int i = p * p; i <= n; i += p){
                prime[i] = 0;
            }
        }
    }
    for(int p = 2; p <= n; p++){
        if(prime[p] == 1){
            prime[p] = p;
        }
    }
}
int main(){
    int n;
    cin >> n;
    int psa[100009];
    psa[0] = 0;
    SieveOfEratosthenes(100009);
    for(int i = 1; i < 100009; i++){
        psa[i] = psa[i - 1] + prime[i - 1];
    }
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        cout << psa[b + 1] - psa[a] << "\n";
    }
    return 0;
    
}