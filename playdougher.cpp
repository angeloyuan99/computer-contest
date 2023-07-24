#include<iostream>
using namespace std;
int main(){
    long long input, n;
    cin >> input >> n;
    long long arr[500005];
    for(long long i = 0; i < 500005; i++){
        arr[i] = 0;
    }
    for(long long i = 0; i < input; i++){
        long long k;
        cin >> k;
        arr[k]++;
    }
    for(long long i = 0; i < n; i++){
        long long a, v;
        cin >> a >> v;
        if(a == 1){
            arr[v / 2] += arr[v];
            arr[(v + 1) / 2] += arr[v];
      //      cout << v / 2 << ": " << arr[v / 2] << " " << (v + 1) / 2 << ": " << arr[(v + 1) / 2] << "\n";
            arr[v] = 0;
        } else{
            cout << arr[v] << "\n";
        }
    }
    // for(long long i = 0; i < n; i++){
    //     long long a, v;
    //     cin >> a >> v;
    //     if(a == 1){
    //         arr[v/2] += arr[v];
    //         arr[(v+1)/2] += arr[v];
    //         arr[v] = 0;
    //     } else{
    //         cout << arr[v] << "\n";
    //     }
    // }
}