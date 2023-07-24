#include<iostream>
using namespace std;
bool isprime(int n) { 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 

    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
        return true; 
    }

int main(){
    cin.sync_with_stdio(0);cin.tie(0);
    cout.sync_with_stdio(0);cout.tie(0);
    int total;
    cin >> total;
    for(int j = 0; j < total; j++){
        int n;
        cin >> n;
        int numbers[n];
        for(int i = 0; i < n; i++){
            cin >> numbers[i];
        }
        int amount = 2, smallest = 1000000, firstnum;
        bool done = false;
        while(amount <= n){
            int pastprimecheck = 0;
            for(int l = 0; l < amount; l++){
                pastprimecheck += numbers[l];
            }
            for(int k = 0; k < n - amount + 1; k++){
                int primecheck = pastprimecheck;
                primecheck += numbers[amount + k] - numbers[k];
                if(isprime(pastprimecheck)){
                    smallest = amount;
                    done = true;
                    firstnum = k;
                    break;
                }
                pastprimecheck = primecheck;
            }
            if(done){
                break;
            }
            amount++;
        }
        if(amount > n){
            cout << "This sequence is anti-primed.\n";
            continue;
        }
        cout << "Shortest primed subsequence is length " << amount << ": ";
        for(int i = 0; i < amount; i++){
            cout << numbers[firstnum + i] << " ";
        }
    }
    return 0;

}