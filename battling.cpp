#include<iostream>
#include<algorithm>
using namespace std;
struct wave{
    long long start, end, addedamount;
};
int main(){
    cin.sync_with_stdio(false);cin.tie(0);
    long long stations, needed, n, counter;
    cin >> stations >> needed >> n;
    counter = stations;
    long long counters[stations];
    for(long long i = 0; i < stations; i++){
        counters[i] = needed;
    }
    wave waves[n];
    for(long long i = 0; i < n; i++){
        cin >> waves[i].start >> waves[i].end >> waves[i].addedamount;
    }
    sort(waves, waves + n);
    cout << counter << "\n";
    for(long long i = 0; i < stations; i++){
        long long count = 0;
        for(long long j = 0; j < n;){
            if(i < waves[j].end && i > waves[j].start){
                count += waves[j].addedamount;
                if(counter > needed){
                    break;
                }
            } else if(i < waves[j].start){
                break;
            }
        }
    }
}