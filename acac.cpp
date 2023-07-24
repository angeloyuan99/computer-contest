#include<iostream>
using namespace std;
int main(){
    string input1, input2;
    cin >> input1 >> input2;
    if(input1.length() != input2.length()){
        cout << "No\n";
        return 0;
    }
    char arr[26];
    for(int i = 0; i < 26; i++){
        arr[i] = 0;
    }
    int n = input1.length();
    for(int i = 0; i < n; i++){
        if(arr[input1[i] - 'a'] != 0 && arr[input1[i] - 'a'] != input2[i]){
            cout << "No\n";
            return 0;
        }
        if(input1[i] != input2[i]){
            arr[input1[i] - 'a'] = input2[i];
            arr[input2[i] - 'a'] = input1[i];
        }
    }
    cout << "Yes\n";
    return 0;

}