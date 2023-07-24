#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long N, D, K, X;
    cin >> N >> D >> K >> X;
    long long arr[N];
    long long P;
    for(long long i = 0; i < N; i++){
        cin >> arr[i];
    }
    cin >> P;
    X = (100 - X);
    sort(arr, arr + N);
    for(long long i = N - 1; i >= 0; i--){
        if(arr[i] < P){
            cout<<"YES\n";
            return 0;
        }
        while(arr[i] >= P){
            K--;
            arr[i] = arr[i] * X / 100;
        }
        if(K < 0){
            cout<<"NO\n";
            return 0;
        }
        // if(arr[i] )
    }
    cout<<"YES\n";
    return 0;
}