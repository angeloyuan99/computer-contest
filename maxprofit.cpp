#include<iostream>
using namespace std;
int main(){
    int n;
    long long counter = 0;
    cin >> n;s
    int value[n], cost[n];
    for(int i = 0; i < n; i++){
        cin >> value[i];
    }
    for(int i = 0; i < n; i++){
        cin >> cost[i];
    }
    for(int i = 0; i < n; i++){
        if(value[i] > cost[i]){
            counter += (value[i] - cost[i]);
        }
    }
    cout << counter << "\n";
}