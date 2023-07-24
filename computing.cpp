#include<iostream>
using namespace std;
void selectionSort(int intArr1[], int n, int index1[]){
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
        int intTemp1 = index1[i];
        intArr1[i] = max1;
        index1[i] = index1[index];
        intArr1[index] = intTemp;
        index1[index] = intTemp1;
    }
    for(int i = 0; i < n; i++){
        cout << intArr1[i] << "\n";
    }
}
int main(){
    int n, k;
    cin >> n >> k;
    int arr1[n], arr2[n], index[n], makesit[k];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
        index[i] = i + 1;
    }
    selectionSort(arr1, n, index);
    int counter = 0, gretaest = 1000000001;
    for(int i = n - 1 - k; i < n; i++){
        makesit[counter] = index[i];
        counter++;
    }
    for(int i = 0; i < n; i++){
        
    }
}