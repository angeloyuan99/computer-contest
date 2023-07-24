#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define first first
#define second second
int R, C, T, dis[1002][1002], d[4][2]={{-1, 0}, {1, 0}, {0, -1}, {0, 1}}, tr, tc, MIN;
pair<int, int>  st, ed; bool g[1002][1002], vis[1002][1002]; char ch;
void bfs(){
    queue<pair<int, int> > Q;
    Q.push(st); dis[st.first][st.second]=0; vis[st.first][st.second]=1;
    while(!Q.empty()){
        int r=Q.front().first, c=Q.front().second; Q.pop();
        for(int i=0; i<4; i++){
            int nr=r+d[i][0], nc=c+d[i][1];
            if(nr>=0&&nr<R&&nc>=0&&nc<C&&!vis[nr][nc]&&!g[nr][nc]){
                dis[nr][nc]=dis[r][c]+1;
                Q.push(make_pair(nr, nc));
                vis[nr][nc]=1;
            }
        }
    }
}
int main(){
    //freopen("test.tfirstt", "r", stdin);
    cin >> R >> C >> st.first >> st.second >> ed.first >> ed.second;
    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++){
            cin >> ch;
            g[i][j] = (ch=='x');
        }
    bfs();
    cin >> T; MIN=dis[ed.first][ed.second];
    while(T--){
        cin >> tr >> tc;
        if(vis[tr][tc]) MIN = min(MIN, dis[tr][tc]);
    }
    cout << dis[ed.first][ed.second]-MIN << endl;
}