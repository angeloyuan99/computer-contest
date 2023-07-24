#include<iostream>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    //cout << n * 4;
    if(n * 4 <= q){
        cout << 0 << "\n";
    }else{
        cout << (n * 4) - q << "\n";
    }
}