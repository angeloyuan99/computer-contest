#include<iostream>
using namespace std;
int main(){
    int n, queens;
    cin >> n >> queens;
    bool arr[n][n];
    for(int i = 0; i < queens; i++){
        int a, b;
        cin >> a >> b;
        for(int j = 0; j < n; j++){
            arr[a][j] = true;
        }
        for(int j = 0; j < n; j++){
            arr[j][b] = true;
        }
        for(int )
    }
}