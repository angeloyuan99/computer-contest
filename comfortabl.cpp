#include<iostream>
#include<vector>
using namespace std;
int x[1005][1005];
int main(){
    int n;
    cin >> n;
    vector<pair<int, int> > cows;
    int total = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        a++;
        b++;
        if(x[a - 1][b] == 2){
            total++;
        } else if(x[a - 1][b] == 3){
            total--;
        }
        x[a - 1][b]++;
        if(x[a + 1][b] == 2){
            total++;
        } else if(x[a + 1][b] == 3){
            total--;
        }
        x[a + 1][b]++;
        if(x[a][b - 1] == 2){
            total++;
        } else if(x[a][b - 1] == 3){
            total--;
        }
        x[a][b - 1]++;
        if(x[a][b + 1] == 2){
            total++;
        } else if(x[a][b + 1] == 3){
            total--;
        }
        x[a][b + 1]++;
        cows.push_back(make_pair(a, b));
        // for(int j = 0; j < 1005; j++){
        //     for(int k = 0; k < 1005; k++){

        //     }
        // }
        cout << total << "\n";
    }
}
// 8
// 0 1                0
// 1 0                0
// 1 1                0
// 1 2                1       X: 1 Y: 1 XTotal: 3  YTotal: 2
// 2 1                0
// 2 2                0
// 3 1                1
// 3 2                2