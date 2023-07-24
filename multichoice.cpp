#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char arr[n];
    char ans[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cin >> ans[i];
    }
    int rightcount = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == ans[i]){
            rightcount++;
        }
    }
    cout << rightcount << "\n";
}