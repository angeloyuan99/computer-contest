#include<iostream>
using namespace std;
int main(){
    int y = 0;
    int x = 1;
    while (x < 8){
        x *= 2;
        y += x;
    }
    cout << y << "\n";

}