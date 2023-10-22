#include<iostream>
#include<vector>
using namespace std;
vector<int> matrix[105];
int v[105], dis[105], disMax;
void dfs(int cur, int pre){
    dis[cur] = dis[pre] + 1;
    v[cur] = 1;

    for(int k: matrix[cur]){
        if (v[k] == 1){
            disMax = max(disMax, dis[cur] - dis[k] +1);
          
        }else if (v[k] == 0){
            dfs(k,cur);
        }
    }
}
int main(){
    
    for(int i = 0; i < 5; i++){
        
        memset(v, 0, sizeof(v));
        memset(dis, 0, sizeof(dis));
        for(int i = 0; i < 105; i++){
            matrix[i].clear();
        }
        disMax = 0;
        
        int numNode;
        cin >> numNode;
        
        for(int j = 0; j < numNode; j++){
            int a,b;
            cin >> a>>b;
            matrix[a].push_back(b);
        }
        
        dfs(1,0);
        cout << disMax << "\n";
    }
}