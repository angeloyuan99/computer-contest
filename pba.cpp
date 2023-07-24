#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++){
        arr[i] += arr[i - 1];
    }
    int checker = 0;
    while(true){
        for(int i = 0; i < n; i++){
            
        }
        checker++;
    }
}