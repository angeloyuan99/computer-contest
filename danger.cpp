#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i < 5; i++){
        int xlength, ylength, rooks;
        cin >> xlength >> ylength >> rooks;
        int dangerx[xlength], dangery[ylength];
        for(int j = 0; j < xlength; j++){
            dangerx[j] = 0;
        }
        for(int j = 0; j < ylength; j++){
            dangery[j] = 0;
        }
        for(int j = 0; j < rooks; j++){
            int a, b;
            cin >> a >> b;
            dangerx[a - 1] = 1;
            dangery[b - 1] = 1;
        }
        int counter = 0;
        for(int j = 0; j < xlength; j++){
            if(dangerx[j] == 1){
                continue;
            }
            for(int k = 0; k < ylength; k++){
                if(dangery[k] == 1){
                    continue;
                } else{
                    counter++;
                }
            }
        }
        cout << counter << "\n";
    }
}