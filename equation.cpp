#include<iostream>
using namespace std;
int main(){
    float a, b;
    cin >> a >> b;
    if(a == 0 && b == 0){
        cout << "indeterminate";
    } else if(a == 0 || b == 0){
        cout << "undefined";
    } else{
        float c = (0 - b) / a;
        cout << printf("%.2f", c);
    }
}