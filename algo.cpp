#include<iostream>
#include<math.h>
using namespace std;
unsigned long long exp(unsigned long long a, unsigned long long b){
    unsigned long long ans = b;
    for(int i = 1; i < a; i++){
        ans *= b;
    }
    return ans;
}
int main(){
    unsigned long long a, b;
    cin >> a >> b;
    cout << exp(a, b) << "\n";
}