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
        intArr1[i] = max1;
        intArr1[index] = intTemp;
        string strtemp = arr2[i];
        arr2[i] = arr2[index];
        arr2[index] = strtemp;
    }
}
int main(){
    int n;
    cin >> n;
    string arr2[n];
    int arr1[n], counter[n];
    for(int i = 0; i < n; i++){
        cin >> arr2[i] >> arr1[i];
        counter[i] = 0;
    }
    selectionSort(arr1, arr2, n);
    int inputlength;
    cin >> inputlength;
    for(int i = 0; i < inputlength; i++){
        int n2;
        cin >> n2;
        for(int i = 0; i < n; i++){
            if(arr1[i] == n2){
                counter[i]++;
            }
        }
    }
    int greatest = 0;
    for(int i = 0; i < n; i++){
        if(counter[i] > greatest){
            greatest = counter[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(counter[i] == greatest){
            cout << arr2[i] << "\n";
            return 0;

        }
    }
}
// 5
// Mary 26000404
// Susan 92132122
// May 21232132
// Ann 62343244
// Peter 21321322
// 8
// 92132122
// 62343244
// 62343244
// 26000404
// 21321322
// 21232132
// 62343244
// 92132122