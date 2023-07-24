#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int arr[a];
    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }
    for(int i = a - 1; i >= 0; i--){
        int index = 0;
        int max1 = arr[index];
        for(int j = 0; j <= i; j++){
            if(arr[j] > max1){
                max1 = arr[j];
                index = j;
            }
        }
        int intTemp = arr[i];
        arr[i] = max1;
        arr[index] = intTemp;
    }
    cout << "\n\n\n";
    for(int i = 0; i < a; i++){
        cout << arr[i] << "\n";
    }
}