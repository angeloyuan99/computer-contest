#include<iostream>
#include<vector>
using namespace std;
bool visited[1001];
vector<int> adj[1000];
int n;
void dfs(int node){
    visited[node] = true;
    for(auto u: adj[node]){
        if(!visited[u]){
            dfs(u);
        }
    }
}
int main(){
    cin >> n;
    for(int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;
        adj[b].push_back(a);
    }
    int ans = -1;
    for(int start = 1; start <= n; start++){
        for(int i = 0; i < 105; i++){
            visited[i] = false;
        }
        dfs(start);
        bool done = true;
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                done = false;
            }
        }
        if(done){
            ans = start;
            break;
        }
    }
    cout << ans << "\n";
}