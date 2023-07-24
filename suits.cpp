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
int main(){
    int a;
    cin >> a;
    int arr1[a];
    for(int i = 0; i < a; i++){
        cin >> arr1[i];
    }
    selectionSort(arr1, a);
    int arrnum[a * 2];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a * 2; j += 2){
            if(arr1[i] == arrnum[j]){
                arrnum[j + 1]++;
            } else{

            }
        }
    }
    for(int i = 0; i < a; i++){
        cout << arr1[i];
    }
}