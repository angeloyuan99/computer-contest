#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int arr[s.length()];
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'A'){
            arr[i] = 1;
        } else{
            arr[i] = 0;
        }
    }
    for(int i = 1; i < s.length(); i++){
        if(arr[i] == 1 && arr[i - 1] == 1){ 
            arr[i - 1] = 3;
        } else if(arr[i] == 0 && arr[i - 1] == 0){
            arr[i - 1] = 3;
        }
    }
    for(int i = 0; i < s.length(); i++){
        cout << s[i];
        if(arr[i] == 3){
            cout << " ";
        }
    }
}