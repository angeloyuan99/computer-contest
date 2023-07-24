#include<iostream>
using namespace std;
int main(){
    long long cases;
    bool used[100000];
    for(long long i = 0; i < 100000; i++){
        used[i] = 0;
    }
    cin >> cases;
    long long start[cases + 1], end[cases + 1], valuation[cases + 1], total = 0;
    for(long long i = 0; i < cases; i++){
        cin >> start[i] >> end[i] >> valuation[i];
        total += valuation[i];
    }
    // for(long long i = 0; i < cases; i++){
    //     cout << start[i] << " " << end[i] << " " << valuation[i] << "\n";
    // }
    long long k;
    cin >> k;
    for(long long i = 0; i < k; i++){
        long long fail;
        cin >> fail;
        for(long long j = 0; j < cases; j++){
            if(fail > start[j] && fail < end[j] && used[j] == 0){
                total -= valuation[j];
                used[j] = 1;
            }
        }
    }
    cout << total << "\n";
}