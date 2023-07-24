#include <bits/stdc++.h>
using namespace std;
int N, M, K, nxt[1000000005], ans[1000000005], a[102], b[102]; bool vis[1000000005];
int main(){
    cin >> N >> M >> K;
    for(int i=1; i<=M; i++) cin >> a[i] >> b[i];
    for(int i=1; i<=N; i++){
        nxt[i] = i;
        for(int j=1; j<=M; j++)
            if(a[j] <= nxt[i] && nxt[i] <= b[j]) nxt[i] = a[j] + b[j] - nxt[i];
    }
    for(int i=1; i<=N; i++) {
        if(vis[i]) continue;
        vector<int> cycle; int cur = i;
        for( ; cycle.empty() || cur!=i;  cur = nxt[cur]){
            cycle.push_back(cur); vis[cur] = true;
        }
        int rem = K % cycle.size();
        for(int j=0; j<cycle.size(); j++) {
            int pos = cycle[(j+rem)%cycle.size()];  ans[pos] = cycle[j];
        }
    }
    for(int i = 0; i <= n; i++){
        cout << ans[i] << "\n";
    }
}