#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int b, h;
        cin >> b >> h;
        int x = b * h, counter;
        while(x != 1){
            x /= 2;
            counter++;
        }
    }
}