#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(a == 0){
        return 0;
    }
    float arr1[a];
    for(int i = 0; i < a; i++){
        cin >> arr1[i];
    }
   // cout << "\n";
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
    // for(int i = 0; i < a; i++){
    //     cout << arr1[i] << "\n";
    // }
    float median;
    if(a % 2 == 0){
        median = (arr1[a / 2] + arr1[a / 2 - 1]) / 2;
    }else{
        median = arr1[a / 2];
    }
    cout << "The median on the test is ";
    cout << fixed;
    cout << setprecision(1);
    cout << median << "\n";
    return 0;
}