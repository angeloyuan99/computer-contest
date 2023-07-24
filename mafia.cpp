#include<iostream>
using namespace std;
int main(){
    unsigned long n, m;
    cin >> n >> m;
    unsigned long total = 0;
    for(int i = 0; i < n; i++){
        unsigned long a, b;
        cin >> a >> b;
        total += a * b;
    }
    cout << total % m << "\n";
}