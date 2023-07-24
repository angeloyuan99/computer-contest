#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int lowest, highest;
    cin >> lowest >> highest;
    int coolcounter = 0;
    for(int i = lowest; i < highest; i++){
        if(round(sqrt(i)) * round(sqrt(i)) == i){
            for(int j = 0; j < highest; j++){
                if(round(sqrt(sqrt(i))) * round(sqrt(sqrt(i))) * round(sqrt(sqrt(i))) == i){
                    coolcounter++;
                }
            }
        }
    }
    cout << coolcounter << "\n";
}