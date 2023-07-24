#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int points[20000][20000];
    for(int i = 0; i < 20000; i++){
        for(int j = 0; j < 20000; j++){
            points[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        points[x][y] = 1;
    }
    for(int i = 0; i < 20000; i++){
        for(int j = 0; j < 20000; j++){
            if(points[i][j] == 1){
                
            }
        }
    }
}