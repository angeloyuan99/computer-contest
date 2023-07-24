#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    float arr1[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    for(int i = n - 1; i >= 0; i--){
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
    float median;
    if(n % 2 == 0){
        median = (arr1[n / 2] + arr1[n / 2 - 1]) / 2;
    }else{
        median = arr1[n / 2];
    }
    cout << fixed;
    cout << setprecision(2);
    cout << median << "\n";
}