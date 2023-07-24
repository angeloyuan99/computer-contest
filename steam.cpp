#include <iostream>
using namespace std;
int find(string str, string arr[], int num){
    for(int i = 0; i < num; i++){
        if(arr[i] == str){
            return i;
        }
    }
    return -1;
}
int main(){
    int num;
    cin >> num;
    string arr[num];
    string arr1[num];
    for(int i = 0; i < num; i++){
        cin >> ws >> arr[i];
    }
    for(int i = 0; i < num; i++){
        cin >> ws >> arr1[i];
    }
    bool arr2[num];
    for(int i = 0; i < num; i++){
        arr2[i] = false;
    }
    for(int i = 0; i < num; i++){
        if(arr[i] == arr1[i] && arr2[i] == false){
            cout << "bad\n";
            return 0;
        }
        if(arr[i] != arr1[i] && arr2[i] == true){
            cout<<"bad\n";
            return 0;
        }
        string temp = arr[i];
        arr[i] = arr[find(arr[i], arr1, num)];
        arr2[i] = true;
        arr2[find(arr[i], arr1, num)] = true;
    }
    cout<<"good\n";
}