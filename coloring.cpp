#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n + 5];
    for(int i = 0; i < n; i++){
        arr[i] = 100;
    }
    for(int i = 0; i < n - 1; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(c % 2 == 0){
            if(arr[a] == 100 & arr[b] == 100){
                arr[a] = 0;
                arr[b] = 0;
            } else if(arr[a] == 0){
                arr[b] = 0;
            } else if(arr[b] == 0){
                arr[a] = 0;
            } else if(arr[a] == 1){
                arr[b] = 1;
            } else if(arr[b] == 1){
                arr[a] = 1;
            }
        } else{
            if(arr[a] == 100 & arr[b] == 100){
                arr[a] = 0;
                arr[b] = 1;
            } else if(arr[a] == 0){
                arr[b] = 1;
            } else if(arr[b] == 0){
                arr[a] = 1;
            } else if(arr[a] == 1){
                arr[b] = 0;
            } else if(arr[b] == 1){
                arr[a] = 0;
            }
        }
    }
    for(int i = 1; i < n + 1; i++){
        cout << arr[i] << "\n";
    }
}