#include<iostream>
#include<queue>
#include<climits>
using namespace std;
int BFS(int src, int dest){
    vector<int> dist(300000, -1);
    dist[src] = 0;
    queue<int> queue;
    queue.push(src);
    while(!queue.empty()){
        int node = queue.front();
        // cout<<node<<"\n";
        if(node == dest){
            return dist[node];
        }
        queue.pop();
        if(node*3 < 300000 && dist[node*3] == -1){
            dist[node*3] = dist[node] + 1;
            queue.push(node*3);
        }
        if(dist[node-3] == -1 && node-3 >= 0){
            dist[node-3] = dist[node] + 1;
            queue.push(node-3);
        }
        if(dist[node-1] == -1 && node-1 >= 0){
            dist[node-1] = dist[node] + 1;
            queue.push(node-1);
        }
        if(dist[node/2] == -1 && node%2 == 0){
            dist[node/2] = dist[node] + 1;
            queue.push(node/2);
        }
    }
    return 0;
}
int main(){
    int N, M;
    cin>>N>>M;
    cout<<BFS(N, M)<<"\n";
    return 0;
}