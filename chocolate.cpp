#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int m, n;
        cin >> m >> n;
        cout << m * n - 1 << "\n";
    }
}