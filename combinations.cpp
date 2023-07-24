#include<iostream>
using namespace std;
int main(){
    int counter = 0, ways = 0;
    for(int i = 0; i < 11; i++){
        counter += i * 1;
        for(int j = 0; j < 3; j++){
            counter += j * 3;
            for(int k = 0; k < 2; k++){
                counter += k * 5;
                cout << counter << "\n";
                if(counter == 11){
                    ways++;
                }
            }
        }
    }
    cout << ways << " ways to make 11 dollars.\n";
}