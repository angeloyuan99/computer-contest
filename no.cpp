#include<iostream>
using namespace std;
int main(){
    int arr[10000000];
    int n;
    cin >> n;
   // int arr[10000000];
    for(int i = 0; i < 10000000; i++){
        arr[i] = 0;
    }
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        arr[a]++;
        arr[b]--;
    }
    int max = 0;
    for(int i = 1; i < 10000000; i++){
        arr[i] += arr[i - 1];
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << max << "\n";
}