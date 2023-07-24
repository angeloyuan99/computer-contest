#include<iostream>
using namespace std;
int main(){
    long long x, n;
    bool hates[1000005];
    for(long long i = 0; i < 1000005; i++){
        hates[i] = false;
    }
    cin >> x >> n;
    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        hates[a] = true;
    }
    for(long long diff = 0; diff <= x; diff++){
        if(hates[x - diff] == false){
            cout << x - diff << "\n";
            return 0;
        } else if(hates[x + diff] == false){
            cout << x + diff << "\n";
            return 0;
        }
    }
}