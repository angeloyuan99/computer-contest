#include<iostream>
#include<math.h>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
map<string, int> values;
vector<pair<int, int> > path;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string object;
        int fill;
        cin >> object >> fill;
        values[object] = fill;
    }
    int placements;
    cin >> placements;
    for(int i = 0; i < placements; i++){
        string object;
        int placement;
        cin >> object >> placement;
        path.push_back(make_pair(placement, values[object]));
    }
    // for(int i = 0; i < path.size(); i++){
    //     cout << path[i].first << " " << path[i].second << "\n";
    // }
    vector<pair<int, int> > rest;
    int energy = 0;
    sort(path.begin(), path.end());
    for(int i = 0; i < path.size() - 1; i++){
        energy += path[i].second;
        if(energy >= path[i + 1].second - path[i].second){
            continue;
        } else{
            cout << i + 1 << "\n";
            return 0;
        }
    }
    // for(map<string, int>::iterator itr = values.begin(); itr != values.end(); itr++){
    //     cout << itr->first << " " << itr->second << "\n";
    // }
}