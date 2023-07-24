#include<iostream>
#include<vector>
using namespace std;
bool cords[10005][10005];
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int corda, cordb;
        cin >> corda >> cordb;
        cords[corda][cordb] = true;
    }
    int largest = 0;
    for(int i = 0; i < 10005; i++){
        for(int j = 0; j < 10005; j++){
            if(cords[i][j] == true){
                for(int k = i; k < 10005; k++){
                    
                }
            }
        }
    }
}