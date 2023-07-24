#include<iostream>
#include<vector>
using namespace std;
vector<unsigned long long> primelist;
void eratosthenes(int n){
    vector<bool> prime(n + 1, true);
    for (int i = 2; i * i <= n; i++){
        if (prime[i] == true){
            for (int j = i * 2; j <= n; j += i){
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++){
        if (prime[i]){
            primelist.push_back(i);
        }
    }
}
int main(){
    int n;
    cin >> n;
    eratosthenes(n);
    unsigned long long answer = 1;
    for (int i = 0; i < primelist.size(); i++){
        unsigned long long prime = primelist[i], exp = 0;
        while (prime <= n){
            exp = exp + (n / prime);
            prime = prime * primelist[i];
        }
        answer = answer * (exp + 1);// % 1000000007;
    }
    cout << answer << "\n";
    return 0;
}