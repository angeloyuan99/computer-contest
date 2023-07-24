#include<iostream>
#include<utility>
#include<algorithm>
#include<iterator>
#include<vector>
using namespace std;
int findgreatest(int counters[], int x){
    int greatest = -1, index = 0;
    for(int i = 0; i < x; i++){
        if(counters[i] > greatest){
            greatest = counters[i];
            index = i;
        }
    }
    return index;
}
int main(){
    int x, y;
    cin >> x >> y;
    vector<pair<int, string> > data;
    for(int i = 0; i < x; i++){
        data.push_back(make_pair(0, ""));
    }
    for(int i = 0; i < x; i++){
        cin >> data[i].second;
    }
    int doublearr[y][x];
    for(int i = 0; i < y; i++){
        for(int j = 0; j < x; j++){
            cin >> doublearr[i][j];
        }
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            data[i].first += doublearr[j][i];
        }
    }
//     for(int i = 0; i < x; i++){
//         cout << data[i].second << " " << data[i].first << "\n";
//     }
//    cout << "\n";
    sort(data.begin(), data.end());
    // for(int i = 0; i < x; i++){
    //     cout << data[i].second << " " << data[i].first << "\n";
    // }
    int num = 3;
    for(int i = x - 1; i >= 0; i--){
        cout << num << ". " << data[i].second << "\n";
        num++;
    }
}