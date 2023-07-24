#include<iostream>
using namespace std;
int main(){
    for(int k = 0; k < 5; k++){
        int a, b, c;
        cin >> a >> b >> c;
        bool arr[a][b];
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                arr[i][j] = false;
            }
        }
        for(int i = 0; i < c; i++){
            int x, y;
            cin >> x >> y;
            for(int j = 0; j < a; j++){
                arr[j][y - 1] = true;
            }
            for(int j = 0; j < a; j++){
                arr[x - 1][j] = true;
            }
        }
        int distinct = 0;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                if(!arr[i][j]){
                    distinct++;
                }
            }
        }
        cout << distinct << "\n";
    }
}