#include<iostream>
using namespace std;
long gridtraveller(long m, long n){
    long table[m + 1][n + 1];
    for(long i = 0; i <= m; i++){
        for(long j = 0; j <= n; j++){
            table[i][j] = 0;
        }
    }
    table[1][1] = 1;
    for(long i = 0; i <= m; i++){
        for(long j = 0; j <= n; j++){
            long current = table[i][j];
            if(j + 1 <= n) table[i][j + 1] += current;
            if(i + 1 <= m) table[i + 1][j] += current;
        }
    }
    return table[m][n];
}
int main(){
    int m, n;
    cin >> m >> n;
    cout << gridtraveller(m, n) << "\n";
}