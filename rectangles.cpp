#include<iostream>
#include<vector>
#include<set>
using namespace std;
set<pair<int, int> > ptSet;
void solve(int n, vector<pair<int, int> > &pts, ostream &out) {
    ptSet.clear();
    for(int i = 0; i < pts.size(); i++){
        ptSet.insert(pts[i]);
    }
    int best = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            pair<int, int>  oth = make_pair(pts[i].first, pts[j].second), 
                oth2 = make_pair(pts[j].first, pts[i].second);
    
            if (ptSet.find(oth) != ptSet.end() && ptSet.find(oth2) != ptSet.end()) {
                best = max(best, abs(pts[j].first - pts[i].first) * abs(pts[j].second - pts[i].second));
            }
        }
    }
    cout << best << '\n';
}
int main(){
    int n;
    cin >> n;
    vector<pair<int, int> > pts;
    pts.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> pts[i].first >> pts[i].second;
    }
    solve(n, pts, cout);
    return 0;
}
// 9
// 1 1
// 5 5
// 7 7
// 5 7
// 7 5
// 10 10
// 5 10
// 10 5
// 20 20