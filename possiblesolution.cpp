#include<iostream>
using namespace std;
bool ifin(int arr[], int n, int baka){
    for(int i = 0; i < n; i++){
        if(arr[i] == baka){
            return true;
        }
    }
    return false;
}
int findsolution(int arr[], int n){
    for(int i = 1; i <= n + 1; i++){
        if(!ifin(arr, n, i)){
            return i;
        }
    }
    return -1;
}
int main(){
    for(int j = 0; j < 5; j++){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cout << findsolution(arr, n) << "\n";
    }
}