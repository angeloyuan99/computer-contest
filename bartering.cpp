#include<iostream>
using namespace std;
int main(){
    int n, minutes;
    cin >> n >> minutes;
    int times[n];
    for(int i = 0; i < n; i++){
        cin >> times[i];
    }
    for(int i = n - 1; i >= 0; i--){
        int index = 0;
        int max1 = times[index];
        for(int j = 0; j <= i; j++){
            if(times[j] > max1){
                max1 = times[j];
                index = j;
            }
        }
        int intTemp = times[i];
        times[i] = max1;
        times[index] = intTemp;
    }
    int count = 0, i = 0, homesthatwerobbedandraped = 0;
    while(count < minutes){
        count += times[i];
        count++;
        if(count < minutes){
            homesthatwerobbedandraped++;
        }
        i++;
    }
    cout << homesthatwerobbedandraped << "\n";
}