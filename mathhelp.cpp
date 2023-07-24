#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int counter = 0;
    for(int i = 1; i <= 100; i++){
        int n = pow(i, 3);
        if(((n + (4 * i) + 2) % 7) == 0){
            cout << i << "\n";
            counter++;
        }
    }
    cout << counter << "\n";
}