#include<iostream>
using namespace std;
int main(){
    long long n, budget, counter = 0, counter1 = 0;
    cin >> n >> budget;
    pair<long long, long long> arr[n];
    for(long long i = 0; i < n; i++){
        long long input, input1;
        cin >> input >> input1;
        arr[i] = pair<long long, long long>(input, input1);
    }
    for(long long i = n - 1; i >= 0; i--){
        long long index = 0;
        long long max1 = arr[0].first + arr[0].second;
        for(long long j = 0; j <= i; j++){
            if(arr[j].first + arr[j].second > max1){
                max1 = arr[j].first + arr[j].second;
                index = j;
            }
        }
        pair<long long, long long> intTemp = arr[i];
        arr[i] = arr[index];
        arr[index] = intTemp;
    }
    // for(long long i = 0; i < n; i++){
    //     cout << arr[i].first << " " << arr[i].second << "\n";
    // }
    int maxbudget = 0;
    for (long long i = 0; i < n; i++) { 
        counter += arr[i].first;
        counter += arr[i].second;
        if(arr[i].first / 2 > maxbudget){
            maxbudget = arr[i].first / 2;
        }
        counter1++;
        if(counter > budget){
            counter -= maxbudget;
            if(counter > budget){
                cout << counter1 - 1 << "\n";
                return 0;
            } else{
                cout << counter1 << "\n";
                return 0;
            }
        }
    }
}