#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool xycomparator(pair<pair<int, int>, pair<int, int > > a, pair<pair<int, int>, pair<int, int > > b){
    if(a.second.first < b.second.first){
        return a.second.first < b.second.first;
    } else if(a.second.first == b.second.first){
        return a.second.second < b.second.second;
    }
    return false;
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
                        intersections.push_back(make_pair(make_pair(j, i), make_pair(cowx[i], cowy[j])));
                    }
                }
            }
        }   
    }
    sort(intersections.begin(), intersections.end(), xycomparator);
    // for(int i = 0; i < intersections.size(); i++){
    //     cout << "a: " << intersections[i].first.first << " b: " << intersections[i].first.second << " x: " << intersections[i].second.first << " y: " << intersections[i].second.second << "\n";
    // }
    bool stop[n];
    for(int i = 0; i < n; i++){
        stop[i] = false;
    }
    int ans[n];
    for(int i = 0; i < intersections.size(); i++){
        int a = intersections[i].first.first, b = intersections[i].first.second, intersectionx = intersections[i].second.first, intersectiony = intersections[i].second.second;
        int ax = cowx[a], ay = cowy[a], bx = cowx[b], by = cowy[b];
        if(stop[a] == true || stop[b] == true){
            continue;
        }
        if(intersectionx - ax > intersectiony - by){
            stop[a] = true;
            ans[a] = intersectionx - ax;
        } else if(intersectionx - ax < intersectiony - by){
            stop[b] = true;
            ans[b] = intersectiony - by;
        }
//      cout << intersectionx << " " <<  ax << " " << intersectiony << " " << by << "\n";
    }
    for(int i = 0; i < n; i++){
        if(stop[i] == true){
            cout << ans[i] << "\n";
        } else{
            cout << "Infinity\n";
        }
    }
    return 0;
}