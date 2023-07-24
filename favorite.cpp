#include<iostream>
using namespace std;
void selectionSort(int intArr1[], int n){
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
        intArr1[i] = max1;
        intArr1[index] = intTemp;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    selectionSort(arr, n);
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int num;
        cin >> num;
        int f;
        for(int j = 0; j < n; j++){
            if(num <= arr[j]){
                cout << arr[j] << " ";
                f = j;
                break;
            }
        }
        int counter = 0;
        for(int j = 0; j < n; j++){
            if(arr[f] == arr[j]){
                counter++;
            }
        }
        cout << counter << "\n";
    }
}