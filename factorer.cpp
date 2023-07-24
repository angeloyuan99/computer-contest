#include<iostream>
#include<math.h>
#include<set>
#include<vector>
using namespace std;
vector<pair<int, int> > counters;
long long primeFactors(long long n){
    for(long long i=2; i<=sqrt(n); i++) {
        int count = 0;
        while(n%i == 0) {
            count++;
            n = n/i;
        }
        if(count>0) {
            counters.push_back(make_pair(i, count));
        }
    }
    if(n>1){
        counters.push_back(make_pair(n, 1));
    }
    int t1 = 1, t2 = 1;
    for(int i = 0; i < counters.size(); i++){
        t1 *= counters[i].first;
        t2 *= counters[i].second;
    }
    int totalcounter = t1 + t2;
    return totalcounter;
} 
int main(){
    long long n;
    cin >> n;
    long long answer = primeFactors(n);
    // if(answer == 8021756){
    //     cout << n << "\n";
    //     return 0;
    // }
    cout << answer << "\n";
}