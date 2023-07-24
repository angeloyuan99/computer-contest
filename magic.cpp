#include<iostream>
using namespace std;
int main(){
    int numbers[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> numbers[i][j];
        }
    }
    int total = 0;
    for(int i = 0; i < 4; i++){
        int horizantalcheck = 0;
        int verticalcheck = 0;
        for(int j = 0; j < 4; j++){
            if(i == 0){
                total+= numbers[i][j];
            }
            horizantalcheck += numbers[i][j];
            verticalcheck += numbers[j][i];
        }
        if(horizantalcheck != total || verticalcheck != total){
            cout << "not magic\n";
            return 0;
        }
    }
    
}