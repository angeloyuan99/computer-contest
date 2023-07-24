#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long> B(n - 1, -1);
    for(long long i = 0; i < n - 1; i++){
        cin >> B[i];
        B[i] -= 2;
    }
    for(long long aO = 0; aO < n; aO++){
        bool bad = false;
        vector<long long> A(n, 0);
        vector<int> S(n, false);
        S[aO] = true;
        A[0] = aO;
        long long prev = aO;
        for(long long i = 1; i < n; i++){
            long long ai = B[i - 1] - prev;
            if(!(0 <= ai && ai < n)){
                bad = true;
                break;
            }
            if(S[ai]){
                bad = true;
                break;
            }
            S[ai] = true;
            A[i] = ai;
            prev = ai;
        }
        if(bad){
            continue;
        }
        for(long long i = 0; i < n; i++){
            cout << A[i] + 1;
            if(i + 1 < n){
                cout << " ";
            } else{
                cout << "\n";
            }
        }
    }

}