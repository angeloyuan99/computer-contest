#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        char arr[4][4];
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 4; k++){
                cin >> arr[j][k];
            }
        }
        // for(int j = 0; j < 4; j++){
        //     for(int k = 0; k < 4; k++){
        //         cout << arr[j][k] << " ";
        //     }
        //     cout << "\n";
        // }
        int temp = 0;
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 4; k++){
                if(arr[j][k] != 'X'){
                    break;
                }
                if(k == 3){
                    temp++;
                }
            }
        }
        if(temp == 1){
            cout << "Yes\n";
            continue;
        }
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 4; k++){
                if(arr[k][j] != 'X'){
                    break;
                }
                if(k == 3){
                    temp++;
                }
            }
        }
        if(temp == 1){
            cout << "Yes\n";
            continue;
        }
        if(arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X' && arr[3][3] == 'X'){
            cout << "Yes\n";
            continue;
        }
        if(arr[0][3] == 'X' && arr[1][2] == 'X' && arr[2][1] == 'X' && arr[3][0] == 'X'){
            cout << "Yes\n";
            continue;
        }
        cout << "No\n";
    }
}