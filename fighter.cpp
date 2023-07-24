#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    while(true){
        n -= k;
        if(n <= 0){
            cout << abs(n) << "\n";
            return 0;
        }
    }
}