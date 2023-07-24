#include<iostream>
#include<vector>
#include<climits>
using namespace std;
long long minstress = LLONG_MAX;
void recursion(vector<pair<long long, long long> > deliveries, long long totalstress, int currentfloor){
    if(deliveries.size() == 0){
        if(totalstress < minstress){
            minstress = totalstress;
        }
    }
    long long weight = 0;
    for(long long i = 0; i < deliveries.size(); i++){
        weight += deliveries[i].second;
    }
    for(long long i = 0; i < deliveries.size(); i++){
        vector<pair<long long, long long> > newdeliveries = deliveries;
        newdeliveries.erase(newdeliveries.begin() + i);
        cout << totalstress << "\n" << (totalstress + (((currentfloor - deliveries[i].first) + 1) * weight)) << "\n" << deliveries[i].first << " " << deliveries[i].second << "\n";
        return recursion(newdeliveries, (totalstress + (((currentfloor - deliveries[i].first) + 1) * weight)), deliveries[i].first);
    }
}
int main(){
    long long n;
    cin >> n;
    vector <pair<long long, long long> > deliveries;
    for(long long i = 0; i < n; i++){
        long long floor, weight;
        cin >> floor >> weight;
        deliveries.push_back(make_pair(floor, weight));
    }
    recursion(deliveries, 0, 101);
    cout << minstress << "\n";
}