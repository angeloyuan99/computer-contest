#include<iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long arr[n + 2];
    long long total = 0;
    arr[0] = 0;
    arr[n + 1] = 0;
    for(long long i = 1; i < n + 1; i++){
        cin >> arr[i];
        total += abs(arr[i] - arr[i - 1]);
    }
    total += abs(arr[n + 1] - arr[n]);
    for(long long i = 1; i < n + 1; i++){
        if(arr[i] >= arr[i - 1] && arr[i] <= arr[i + 1]){
            cout<< total << "\n";
        } else if(arr[i] <= arr[i - 1] && arr[i] >= arr[i + 1]){
            cout << total << "\n";
        } else{
            if(abs(arr[i] - arr[i - 1]) > abs(arr[i] - arr[i + 1])){
                cout << total - (abs(arr[i] - arr[i + 1]) * 2) << "\n";
            } else{
                cout << total - (abs(arr[i] - arr[i - 1]) * 2) << "\n";
            }
        }
    }
    return 0;    

}