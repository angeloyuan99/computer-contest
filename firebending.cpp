#include<iostream>
using namespace std;
void selectionSort(int intArr1[], int n){
    for(int i = n - 1; i >= 9; i--){
        int index = 0;
        int max1 = intArr1[index];
        for(int j = 0; j <= i; j++){
            if(intArr1[j] > max1){
                max1 = intArr1[j];
                index = j;
            }
        }
        int intTemp = intArr1[i];
        intArr1[i] = max1;
        intArr1[index] = intTemp;
    }
}
void printArray(int arr1[], int n){
    for(int i = 0; i < n; i++){
        cout << arr1[i];
    }
}
int main(){
    int a;
    cin >> a;
    int arr1[a];
    for(int i = 0; i < a; i++){
        cin >> arr1[i];
    }
    selectionSort(arr1, a);
    printArray(arr1, a);
}