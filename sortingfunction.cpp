#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int arr1[a];
    for(int i = 0; i < a; i++){
        cin >> arr1[i];
    }
    for(int i = a - 1; i >= 0; i--){
        int index = 0;
        int max1 = arr1[index];
        for(int j = 0; j <= i; j++){
            if(arr1[j] > max1){
                max1 = arr1[j];
                index = j;
            }
        }
        int intTemp = arr1[i];
        arr1[i] = max1;
        arr1[index] = intTemp;
    }
    for(int i = 0; i < a; i++){
        cout << arr1[i] << "\n";
    }
}
