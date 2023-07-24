#include<iostream>
using namespace std;
int main(){
    long long n,  minutes = 0;
    cin >> n;
    long long slices[n], total = 0, totaldifference = 0;
    for(long long i = 0; i < n; i++){
        cin >> slices[i];
        total += slices[i];
    }
    if(total % n != 0){
        cout << "Impossible\n";
        return 0;
        
    }
    long long average = total / n;
    for(long long i = 0; i < n; i++){
        if(slices[i] > average){
            totaldifference += slices[i] - average;
        }
    }
    cout << totaldifference << "\n";
}