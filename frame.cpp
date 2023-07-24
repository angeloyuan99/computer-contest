#include<iostream>
using namespace std;
int main(){
    int l, w;
    cin >> l >> w;
    char arr[l][w];
    for(int i = 0; i < l; i++){
        for(int j = 0; j < w; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < w + 2; i++){
        cout << "#";
    }
    cout << "\n#";
    for(int i = 0; i < l; i++){
        for(int j = 0; j < w; j++){
            cout << arr[i][j];
        }
        cout << "#\n#";
    }
    for(int i = 0; i < w + 1; i++){
        cout << "#";
    }
    cout << "\n";
}