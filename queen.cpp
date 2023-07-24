#include<iostream>
using namespace std;
int R[10], C[10];
bool canQueenAttack(int qR, int qC, int oR, int oC){ 
    if (qR == oR){
        return true; 
    }
    if (qC == oC){
        return true;
    } 
    if (abs(qR - oR) == abs(qC - oC)){
        return true; 
    }
    return false; 
}
int main(){
    int a, b, counter = 0;
    cin >> a >> b;
    for(int i = 0; i < b; i++){
        cin >> R[i] >> C[i];
        R[i]--;
        C[i]--;
    }
    for(int r = 0; r < a; r++){
        for(int c = 0; c < a; c++){
            for(int k = 0; k < b; k++){
                if(canQueenAttack(R[k], C[k], r, c)){
                    counter++;
                //    cout << "(" << r << ", " << c << ")\n";
                    break;
                }
            }
        }
    }
    cout << a * a - counter << "\n";
}