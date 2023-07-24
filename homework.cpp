#include<iostream>
using namespace std;
int main(){
    int a, m, t;
    cin >> a >> m >> t;
    if(a * m <= t){
        cout << "Y";
    } else{
        cout << "N";
    }
}