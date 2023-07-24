#include<iostream>
using namespace std;
long gridtraveller(long m, long n){
    if(m == 1 && n == 1){
        return 1;
    }
    if(m == 0 || n == 0){
        return 0;
    }
    return(gridtraveller(m - 1, n)) + gridtraveller(m, n - 1);
}
long memo[100000][100000];
long gridtraveller2(long m, long n){
    if(memo[m][n] > 0){
        return memo[m][n];
    }
    if(m == 1 && n == 1){
        return 1;
    }
    if(m == 0 || n == 0){
        return 0;
    }
    memo[m][n] = gridtraveller2(m - 1, n) + gridtraveller2(m, n - 1);
    return(memo[m][n]);
}
int main(){
    int m, n;
    cin >> m >> n;
    cout << gridtraveller2(m, n) << "\n";
}