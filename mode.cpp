#include<iostream>
using namespace std;
int main(){
    int n, arr[200000];
    cin >> n;
    for(int i = 0; i < 200000; i++){
        arr[i] = 0;
    }
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        arr[input + 100000]++;
    }
    int greatest = 0;
    for(int i = 0; i < 200000; i++){
        if(arr[i] > greatest){
            greatest = arr[i];
        }
    }
    for(int i = 0; i < 200000; i++){
        if(arr[i] == greatest){
            cout << i - 100000 << " ";
        }
    }
    cout << "\n";
    return 0;

}