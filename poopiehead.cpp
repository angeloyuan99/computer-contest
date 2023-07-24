#include<iostream>
using namespace std;
int main(){
    long long n, t, k;
    cin >> n >> t >> k;
    long long arr[n + 1];
    for(long long i = 0; i <= n; i++){
        arr[i] = t - k;
    }
    for(long long i = 0; i < k; i++){
        long long winner;
        cin >> winner;
        arr[winner]++;
    }
    long long counter = 0;
    for(long long i = 1; i <= n; i++){
        if(arr[i] > 0){
            counter++;
        }
    }
    cout << counter << "\n";
}