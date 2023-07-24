#include<iostream>
using namespace std;
int main(){
    int n, n1;
    cin >> n >> n1;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n1; i++){
        int split, total1 = 0, total2 = 0;
        cin >> split;
        for(int j = 0; j < split; j++){
            total1 += arr[j];
        }
        for(int j = 0; j < split; j++){
            total1 += arr[j];
        }
    }
}