#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n + 1], arr1[n + 1];
    arr[0] = 0;
    arr1[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        arr[i] = arr[i] + arr[i - 1];
    }
    for(int i = 1; i <= n; i++){
        cin >> arr1[i];
        arr1[i] = arr1[i] + arr1[i - 1];
    }
    for(int i = n; i >= 0; i--){
        if(arr[i] == arr1[i]){
            cout << i << "\n";
            return 0;
        }
    }
}