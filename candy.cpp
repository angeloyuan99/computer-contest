#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long arr[n];
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    if(n % 2 == 0){
        cout << arr[n / 2] - arr[n / 2 - 1] << "\n";
    } else{
        cout << arr[n / 2 + 1] - arr[n / 2] << "\n";
    }
}