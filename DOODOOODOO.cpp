#include<iostream>
using namespace std;
int main(){
    int total[100], leaderboard[100], worst[100];
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        total[i] = 0;
        worst[i] = 1;
    }
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            total[j] += a;
        }
        for(int j = 0; j < n; j++){
            int t = 1;
            for(int p = 0; p < n; p++){
                if(p != j && total[p] > total[j]){
                    t++;
                }
            }
            if(t > worst[j]){
                worst[j] = t;
            }
            leaderboard[j] = t;
        }
    }
    for(int j = 0; j < n; j++){
        if(leaderboard[j] == 1){
            cout << "Yodeller " << j + 1 << " is the TopYodeller: score " << total[j] << ", worse rank " << worst[j] << "\n";
        }
    }
}