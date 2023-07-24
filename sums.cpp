#include<iostream>
using namespace std;
int arr[1000000], arr1[1000000];
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    for(int i = 1; i <= n; i++){
        cin >> arr1[i];
        arr1[i] += arr1[i - 1];
    }
    for(int i = n; i >= 0; i--){
        if(arr[i] == arr1[i]){
            cout << i << "\n";
            return 0;
        }
    }
}