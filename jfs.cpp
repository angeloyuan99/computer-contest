#include<iostream>
#include<queue>
using namespace std;
int adj[4][4];
bool vist[4];
int main()
{
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      cin>>adj[i][j];
    }
  }
  queue<int> q;
  q.push(0);
  vist[0] = true;
  while(!q.empty()){
    int i = q.front();
    q.pop();
    for(int j = 0; j < 4; j++){
      if(adj[i][j] == 1){
        if(vist[j]){
          cout<<"No\n";
          return 0;
        }
        q.push(j);
        adj[i][j] = 0;
        adj[j][i] = 0;
        vist[j] = true;
      }
    }
  }
  // cout<<"pass\n";
  for(int i = 0; i < 4; i++){
    if(vist[i] == false){
      cout<<"No\n";
      return 0;
    }
  }
  cout<<"Yes\n";
  return 0;
}
