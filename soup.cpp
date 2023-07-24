#include<iostream>
using namespace std;
bool unsorted(int arr[]){
    if(arr[0] < arr[1] && arr[1] < arr[2]){
        return false;
    }
    return true;
}
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int arr[3] = {a, b, c};
    while(unsorted(arr)){
        if(arr[0] > arr[1]){
            int temp = arr[0];
            arr[0] = arr[1];
            arr[1] = temp;
        }
        if(arr[1] > arr[2]){
            int temp = arr[1];
            arr[1] = arr[2];
            arr[2] = temp;
        }
    }
    cout << arr[1] << "\n";
}