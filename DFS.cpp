#include<iostream>
#include<queue>
using namespace std;
int adj[105][105], a;
bool visited[105];
void DFS(int start, bool visited[], int length){
    visited[start] = true;
    for (int i = 0; i < 105; i++) {
        if (adj[start][i] == 1 && (!visited[i])) {
            if(i == 1){
                cout << length + 1 << "\n";
                return;
            }
            DFS(i, visited, length + 1);
        }
    }
}
int main(){
    for(int ff = 0; ff < 5; ff++){
        cin >> a;
        for(int i = 0; i < 105; i++){
            for(int j = 0; j < 105; j++){
                adj[i][j] = 0;
            }
        }
        for(int i = 0; i < a; i++){
            int n, b;
            cin >> n >> b;
            adj[a][b] = 1;
        }
        if(adj[1][1] == 1){
            cout << 1 << "\n";
            continue;
        }
        for(int i = 0; i < 105; i++){
            if(adj[1][i]){
                for(int j = 0; j < 105; j++){
                    visited[j] = false;
                }
                DFS(i, visited, 0);
            }
        }
    }
}