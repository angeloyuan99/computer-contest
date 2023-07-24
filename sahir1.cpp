#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[100][100];
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        arr[x][y] = 1;
    }
    queue <int> q;
    q.push(a);
    int parent[100];
    for(int i = 0; i < 100; i++){
        parent[i] = 0;
    }
    parent[a] = a;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int i = 1; i < 100; i++){
            if(arr[cur][i] == 1 && parent[i] == 0){
                q.push(i);
                parent[i] = cur;
            }
        }
    }
    if(parent[b] == 0){
        cout << "NO SAHIR!";
    } else{
        cout << "GO SAHIR!";
    }
}