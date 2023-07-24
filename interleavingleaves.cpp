#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int len;
        cin >> len;
        char array[len];
        char array1[len];
        for(int j = 0; j < len; j++){
            cin >> array[j];
        }
        for(int j = 0; j < len; j++){
            cin >> array1[j];
            if(j == len - 1){
                cout << "\n";
            }
        }
        for(int j = len; j > 0; j--){
            cout << array1[j - 1];
            cout << array[j - 1];
        }
    }
    cout << "\n";
    return 0;
}