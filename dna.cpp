#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 'T'){
            cout << "DNA\n";
            return 0;
        } else if(arr[i] == 'U'){
            cout << "RNA\n";
            return 0;
        }
        if(arr[i] != 'A' && arr[i] != 'C' && arr[i] != 'G'){
            cout << "neither\n";
            return 0;
        }
    }
    cout << "both\n";
    return 0;
}