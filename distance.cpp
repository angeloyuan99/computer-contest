#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long N, M;
    cin >> N >> M;
    vector<pair<long long, long long> > ans;
    for(long long i = 1; i <= M; i++){
        long long prev = N * (i - 1) / M + 1, curr = N * i / M;
        if(N * i % M != 0){
            curr++;
        }
        for(long long j = prev; j <= curr; j++){
            ans.push_back(make_pair(j, i));
        }
    }
    cout << ans.size() << "\n";
    for(long long i = 0; i < ans.size(); i++){
        cout << ans[i].first << " " << ans[i].second << "\n";
    }
    return 0;
}   