#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<pair<int, int>, pair<int, int> > > cords;
    for(int i = 0; i < n; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cords.push_back(make_pair(make_pair(a, b), make_pair(c, d)));
    }
    int x, y;
    cin >> x >> y;
    for(int i = cords.size() - 1; i >= 0; i--){
        if(((x >= cords[i].first.first) && x <= (cords[i].first.first + cords[i].second.first)) && ((y >= cords[i].first.second) && (y <= (cords[i].first.second + cords[i].second.second)))){
            cout << i + 1 << "\n";
            return 0;
        }
    }
}