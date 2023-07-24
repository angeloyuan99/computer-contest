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
    cin>>num;
    string arr[num];
    string arr2[num];
    for(int i = 0; i < num; i++){
        cin>>ws>>arr[i];
    }
    for(int i = 0; i < num; i++){
        cin>>ws>>arr2[i];
    }
    bool arr3[num];
    for(int i = 0; i < num; i++){
        arr3[i] = false;
    }
    for(int i = 0; i < num; i++){
        if(arr[i] == arr2[i] && arr3[i] == false){
            cout<<"bad"<<endl;
            return 0;
        }
        if(arr[i] != arr2[i] && arr3[i] == true){
            cout<<"bad"<<endl;
            return 0;
        }
        string temp = arr[i];
        arr[i] = arr[find(arr[i], arr2, num)];
        arr3[i] = true;
        arr3[find(arr[i], arr2, num)] = true;
    }
    cout<<"good"<<endl;
}
