#include<math.h>
#include<iostream>
using namespace std;
int main(){
    long long n, lowestdifference = INT_MAX, totalcounter = 0;
    cin >> n;
    long long arr[n];
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
        totalcounter += arr[i];
        arr[i] = totalcounter;
    }
    for(long long i = 0; i < n; i++){
        if(abs((arr[i] - (totalcounter - arr[i]))) < lowestdifference){
            lowestdifference = abs(arr[i] - (totalcounter - arr[i]));
        }
    }
    cout << lowestdifference << "\n";
}