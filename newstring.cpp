#include<iostream>
using namespace std;
int main(){
    string input1, input2;
    cin >> input1 >> input2;
    // if(input1.length() != input2.length()){
    //     cout << "No\n";
    //     return 0;
    // }
    int arr[100];
    for(int i = 0; i < 100; i++){
        arr[i] = -1;
    }
    int n = input1.length();
    for(int i = 0; i < n; i++){
        int s = input1[i] - 'a';
        int t = input2[i] - 'a';

        if(arr[s] == -1) arr[s] = t;
        if(arr[t] == -1) arr[t] = s;

        if(arr[s] != t || arr[t] != s) {
            cout << "No\n";
            return 0;
        }
        
    }
    cout << "Yes\n";
    return 0;

}