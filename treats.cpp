#include<iostream>
#include<algorithm>
using namespace std;
int n, treats;
long long calcdist(long long arr[], int i){
    long long negmax = 0, posmax = 0, total = 0;
    for(int j = i; j < i + treats; j++){
        if(arr[j] < negmax){
            negmax = arr[j];
        } else if(arr[j] > posmax){
            posmax = arr[j];
        }
    }
    total = abs(negmax) + posmax;
   // cout << i << ": \nnegmax: " << negmax << " posmax: " << posmax << " total: " << total << " grand total: ";
    if(abs(negmax) < abs(posmax)){
   //     cout << abs(negmax) + total << "\n\n";
        return(abs(negmax) + total);
    } else{
   //     cout << posmax + total << "\n\n";
        return(posmax + total);
    }
}
int main(){
    cin >> n >> treats;
    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    long long min = 9223372036854775807;
    for(int i = 0; i < n + 1 - treats; i++){
        if(calcdist(arr, i) < min){
            min = calcdist(arr, i);
        }
    }
    cout << min << "\n";
}