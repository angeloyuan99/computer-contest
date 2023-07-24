#include<iostream>
#include<queue>
using namespace std;
int vist[10000][10000];
int m, n;
pair<int, int> start, finish;
bool valid(int a, int b){
    if(a == start.first && b == start.second){
        return false;
    }
    if(vist[a + 2][b + 1] == true && vist[a -2][b + 1] == true && vist[a][b + 1] == true && vist[a + 1][b] == true && vist[]){

    }
    if(a >= 1 && a <= m && b >= 1 && b <= n){
        return true;
    }
    return false;
}
int main(){
    cin >> start.first >> start.second >> finish.first >> finish.second;
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            char input;
            cin >> input;
            if(input == '.'){
                vist[i][j] = 0;
            } else{
                vist[i][j] = -1;
            }
        }
    }
    queue<pair<int, int> > q;
    vist[start.first][start.second] = 0;
    q.push(make_pair(start.first, start.second));
    while(!q.empty()){
        pair<int, int> curr = q.front();
        int x = curr.first;
        int y = curr.second;
        q.pop();
        if(x == finish.first && y == finish.second){
            cout<<vist[x][y]<<"\n";
            return 0;
        }
        if(valid(x + 2, y + 1) && vist[x + 2][y + 1] == 0){
            q.push({x + 2, y + 1});
            vist[x + 2][y + 1] = vist[x][y] + 1;
        }
        if(valid(x + 2, y - 1) && vist[x + 2][y - 1] == 0){
            q.push({x + 2, y - 1});
            vist[x + 2][y - 1] = vist[x][y] + 1;
        }
        if(valid(x - 2, y + 1) && vist[x - 2][y + 1] == 0){
            q.push({x - 2, y + 1});
            vist[x - 2][y + 1] = vist[x][y] + 1;
        }
        if(valid(x - 2, y - 1) && vist[x - 2][y - 1] == 0){
            q.push({x - 2, y - 1});
            vist[x - 2][y - 1] = vist[x][y] + 1;
        }
        if(valid(x + 1, y + 2) && vist[x + 1][y + 2] == 0){
            q.push({x + 1, y + 2});
            vist[x + 1][y + 2] = vist[x][y] + 1;
        }
        if(valid(x - 1, y + 2) && vist[x - 1][y + 2] == 0){
            q.push({x - 1, y + 2});
            vist[x - 1][y + 2] = vist[x][y] + 1;
        }
        if(valid(x + 1, y - 2) && vist[x + 1][y - 2] == 0){
            q.push({x + 1, y - 2});
            vist[x + 1][y - 2] = vist[x][y] + 1;
        }
        if(valid(x - 1, y - 2) && vist[x - 1][y - 2] == 0){
            q.push({x - 1, y - 2});
            vist[x - 1][y - 2] = vist[x][y] + 1;
        }
    }
    return 0;
}