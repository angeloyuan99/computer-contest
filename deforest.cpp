#include<iostream>
using namespace std;
int main(){
    long long n, total = 0;
    cin >> n;
    long long totals[n];
    for(int i = 0; i < n; i++){
        long long temp;
        cin >> temp;
        total += temp;
        totals[i] = total;
    }
    long long queries;
    cin >> queries;
    for(int i = 0; i < queries; i++){
        long long a, b;
        cin >> a >> b;
        if(a == 0){
            cout << totals[b] << "\n";
        } else{
            if(b >= a){
                cout << abs(totals[b] - totals[a - 1]) << "\n";
            } else{
                cout << abs(totals[b - 1] - totals[a]) << "\n";
            }
        }
    }
}