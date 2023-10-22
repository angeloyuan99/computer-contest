#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ycomparator(pair<pair<int, int>, pair<int, int > > a, pair<pair<int, int>, pair<int, int > > b){
    return a.second.second < b.second.second;
}
bool xcomparator(pair<pair<int, int>, pair<int, int > > a, pair<pair<int, int>, pair<int, int > > b){
    return a.second.second < b.second.second;
}
int main(){
    int n;
    cin >> n;
    string direction[n];
    vector<pair<pair<int, int>, pair<int, int > > > intersections;
    int cowx[n];
    int cowy[n];
    for(int i = 0; i < n; i++){
        cin >> direction[i] >> cowx[i] >> cowy[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(direction[i] != direction[j]){
                if(direction[i] == "E"){
                    if(cowx[i] < cowx[j] && cowy[i] > cowy[j]){
                        intersections.push_back(make_pair(make_pair(i, j), make_pair(cowx[j], cowy[i])));
                    }
                } else if(direction[i] == "N"){
                    if(cowx[i] > cowx[j] && cowy[i] < cowy[j]){
                        intersections.push_back(make_pair(make_pair(i, j), make_pair(cowx[i], cowy[j])));
                    }
                }
            }
        }
    }
    sort(intersections.begin(), intersections.end(), xcomparator);
    sort(intersections.begin(), intersections.end(), ycomparator);
    for(int i = 0; i < intersections.size(); i++){
        cout << "a: " << intersections[i].first.first << " b: " << intersections[i].first.second << " x: " << intersections[i].second.first << " y: " << intersections[i].second.second << "\n";
    }
}