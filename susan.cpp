#include<iostream>
using namespace std;
void selectionSort(int intArr1[], string arr2[], int n){
    for(int i = n - 1; i >= 0; i--){
        int index = 0;
        int max1 = intArr1[index];
        for(int j = 0; j <= i; j++){
            if(intArr1[j] > max1){
                max1 = intArr1[j];
                index = j;
            }
        }
        int intTemp = intArr1[i];
        string strtemp = arr2[i];
        intArr1[i] = max1;
        arr2[i] = arr2[index];
        intArr1[index] = intTemp;
        arr2[index] = strtemp;
    }
}
int main(){
    int n;
    cin >> n;
    string arr[n];
    int arr1[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i] >> arr1[i];
    }
    selectionSort(arr1, arr, n);
    int median = arr1[(n - 1) - n / 2];
    int num = 0;
    for(int i = 0; i < n; i++){
        if(arr1[i] == median){
            num++;
        }
    }
    string arr2[num];
    int blah = 0;
    for(int i = 0; i < n; i++){
        if(arr1[i] == median){
            arr2[blah] = arr[i];
            blah++;
        }
    }
    for(int i = 0; i < num; i++){
        cout << arr2[i] << "\n";
    }
}