#include<iostream>
using namespace std;
int main(){
    int arr[10000];
    for(int i = 0; i < 10000; i++){
        arr[i] = 0;
    }
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        arr[input]++;
    }
    int most = 0, num;
    for(int i = 0; i < 10000; i++){
        if(arr[i] > most){
            most = arr[i];
            num = i;
        }
    }
    cout << num << "\n";
}