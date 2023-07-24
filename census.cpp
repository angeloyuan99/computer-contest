#include<iostream>
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
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        cout << arr1[input - 1] << "\n";
    }
}
// 10
// 42
// 23
// 15
// 52
// 63
// 24
// 73
// 54
// 66
// 10
// 3
// 1
// 5
// 10