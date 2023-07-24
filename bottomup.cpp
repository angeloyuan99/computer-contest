#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int recursion(vector<pair<long long, long long> > deliveries, long long currentfloor){
    if(deliveries.size() == 0){
        return 0;
    }
    long long shortest = LLONG_MAX, totalweight = 0;
    for(long long i = 0; i < deliveries.size(); i++){
        totalweight += deliveries[i].second;
    }
    for(long long i = 0; i < deliveries.size(); i++){
        vector<pair<long long, long long> > left_gifts(deliveries);
        left_gifts.erase(left_gifts.begin() + i);
        long long stress2 = recursion(left_gifts, deliveries[i].first), stress = totalweight * (abs(currentfloor - deliveries[i].first) + 1);
        shortest = min(shortest,  stress + stress2);
    }
    return shortest;
}
int main(){
    long long n, totalweight = 0;
    cin >> n;
    vector <pair<long long, long long> > deliveries;
    for(long long i = 0; i < n; i++){
        long long floor, weight;
        cin >> floor >> weight;
        deliveries.push_back(make_pair(floor, weight));
    }
    cout << recursion(deliveries, 101) << "\n";
}