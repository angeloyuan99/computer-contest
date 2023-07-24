#include<iostream>
using namespace std;
int arrx[1009], arry[1009];
int main(){
    int n, total = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b, total = 0;
        cin >> a >> b;
        arrx[a]++;
        arry[b]++;
    }
}