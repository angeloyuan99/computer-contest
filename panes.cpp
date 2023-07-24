#include<iostream>
using namespace std;
int main(){
    int gates;
    cin>>gates;
    int arr[gates];
    for(int i = 0; i < gates; i++){
        arr[i] = i;
    }
    int planes;
    cin>>planes;
    int future[planes];
    for(int i = 0; i < planes; i++){
        cin>>future[i];
    }
    for(int p = 0; p < planes; p++){
        bool condition = false;
        int index = future[p];
        index--;
        for(int i = 0; i < future[p]; i++){
            if(arr[index] == -1){
                condition = false;
            }
            else if(index == arr[index]){
                arr[index]--;
                condition = true;
                break;
            }
            else{
                int temp = index;
                index = arr[index];
                arr[temp] = arr[index]; 
            }
        }
        if(condition == false){
            cout<<p<<"\n";
            return 0;
        }
    }
    cout<<planes<<"\n";
    return 0;
}