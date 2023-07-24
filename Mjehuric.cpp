#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    while(true){
        if(arr[0] > arr[1]){
            int x = arr[1];
            arr[1] = arr[0];
            arr[0] = x;
            cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << "\n";
        }else if(arr[1] > arr[2]){
            int x = arr[2];
            arr[2] = arr[1];
            arr[1] = x;
            cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << "\n";
        }else if(arr[2] > arr[3]){
            int x = arr[3];
            arr[3] = arr[2];
            arr[2] = x;
            cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << "\n";
        }else if(arr[3] > arr[4]){
            int x = arr[4];
            arr[4] = arr[3];
            arr[3] = x;
            cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << "\n";
        }else if(arr[0] == 1 && arr[1] == 2 && arr[2] == 3 && arr[3] == 4 && arr[4] == 5){
            return 0;
        }
    }
}