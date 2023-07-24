#include<iostream>
#include<math.h>
#include<iomanip>
#include<vector>
using namespace std;
long long Health, Enemies, Defensemodes;
long long damage[200001];
long long start, seconds, damagedealt;
long long longest;
double armor_damage(long long damage, long long t, long long a) {
    return (damage - t) * (a == 0 ? 1 : a * 1.0/100);
}
int main() {
    cin >> Health >> Enemies >> Defensemodes;
    pair<long long, double> armor[Defensemodes];
    for (long long i = 0; i < Defensemodes; i++){
        cin >> armor[i].first >> armor[i].second;
        armor[i].second = armor[i].second / 100;
        armor[i].second = 1 - armor[i].second;
    }
    for (long long i = 0; i < Enemies; i++) {
        cin >> start >> seconds >> damagedealt;
        damage[start] += damagedealt;
        damage[start + seconds] -= damagedealt;
        longest = max(longest, start + seconds);   
    }
    for(long long i = 1; i <= longest; i++){
        damage[i] += damage[i - 1];
    }
    double totald = 0;
    for(long long i = 0; i < longest; i++ ) {
        double mind = damage[i];
        for(long long j = 0; j < Defensemodes; j++) {
            long long a = 0;
            mind = min(mind, double(max(a, damage[i] - armor[j].first)) * armor[j].second);
        }
        totald += mind;
    }
    if(totald > Health){
        cout << "Act Like A Cactus.\n";
    }else{
        cout << fixed << setprecision(2) << (Health - totald) << "\n";
    } 
    return 0;
}