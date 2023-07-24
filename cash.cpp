#include<iostream>
using namespace std;
int main(){
    int arr[12] = {0, 1, 1, 2, 2, 0, 0, 0, 0, 0, 0, 0};
    for(int i = 5; i < 12; i++){
        arr[i] = arr[i] + arr[i - 1] + arr[i - 3] + arr[i - 5];
    }
    for(int i = 0; i < 12; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}