#include<iostream>
using namespace std;
int main(){
    int points, users, ratio1, ratio2, counter = 0;
    cin >> points >> users >> ratio1 >> ratio2;
    for(int i = 0; i <= users; i++){
        for(int j = 0; j <= users; j++){
            for(int k = 0; k <= users; k++){
                if(i + j + k == users && i * -1 + j * 1 + k * 2 == points){
                    if(ratio1 == i && ratio2 == j){
                        counter++;
                    } 
                    if(ratio1 == i && ratio2 == k){
                        counter++;
                    } 
                    if(ratio1 == k && ratio2 == j){
                        counter++;
                    }
                }
            }
        }
    }
    cout << counter << "\n";
}