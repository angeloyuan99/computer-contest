#include<iostream>
#include<algorithm>
using namespace std;
struct wave{
    long start, end, addedamount;
};
bool comparator(wave wave1, wave wave2){
return(wave1.start < wave2.start);
}
int main(){
    cin.sync_with_stdio(false);cin.tie(0);
    long stations, needed, n, counter;
    cin >> stations >> needed >> n;
    counter = stations;
    wave waves[n];
    for(long i = 0; i < n; i++){
        cin >> waves[i].start >> waves[i].end >> waves[i].addedamount;
    }
    sort(waves, waves + n, comparator);
    // for(long i = 0; i < n; i++){
    //     cout << waves[i].start << " " << waves[i].end << " " << waves[i].addedamount << "\n";
    // }
    for(long i = 0; i < stations; i++){
        long count = 0;
        for(long j = 0; j < n; j++){
            if(i <= waves[j].end - 1 && i >= (waves[j].start - 1)){
                count += waves[j].addedamount;
                if(count >= needed){
                    counter--;
                    break;
                }   
            } else if(i < waves[j].start){
                break;
            }
        }
    }
    cout << counter << "\n";
}