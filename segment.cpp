#include<iostream>
#include<queue>
#include<list>
#include<map>
#include<set>
using namespace std;
class Graph 
{ 
    int V;              // No. of vertices 
    list<int> *adj;     // Pointer to an array containing 
                        // adjacency lists 
public: 
    Graph(int V);              // Constructor 
    void addEdge(int v, int w);// function to add an edge to graph 
    void topsort(vector<int> indegree, map<int, string> names);
    // vector<int> indegree();
}; 
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w);    // Add w to v’s list. 
}       
void Graph::topsort(vector<int> in, map<int, string> names)
{
  set<int> q;
  // int counter = 0;
  // vector<int> in = indegree();
  for(int i = 0; i < in.size(); i++){
    if(in[i] == 0){
      q.insert(i);
      auto it = names.find(i);
      // if(it != names.end()){
      //   cout<<it->second<<"\n";
      // }you need to 

      
      // cout<<names[i]<<"\n";
    }
  }
  while(!q.empty()){
    auto tempit = q.begin();
    int temp = *tempit;
    q.erase(temp);
    cout<<names[temp]<<"\n";
    // counter++;
    // cout<<temp<<": ";
    for(auto it : adj[temp]){
      // cout<<it<<" ";
      in[it]--;
      if(in[it] == 0){
        // cout<<it<<" ";
        q.insert(it);
        // cout<<names[it]<<"\n";
      }
    }
    // cout<<"\n";
  }
}
bool searchByValue(map<int, string> names, string target){
  for(auto it = names.begin(); it != names.end(); it++){
    if(it->second == target)return true;
  }
  return false;
}
int main()
{
  int e;
  cin>>e;
  int v = e*2;
  Graph g(v);
  vector<int> indegree(v, 0);
  map<int, string> names;
  for(int i = 0 ; i < e; i++){
    string a, b;
    cin>>a>>b;
    // string temp = a;
    // a = b;
    // b = temp;
    if(searchByValue(names, a) == false){
      names.insert(pair<int, string>(names.size(), a));
    }
    if(searchByValue(names, b) == false){
      names.insert(pair<int, string>(names.size(), b));
    }
    int aint = 0, bint = 0;
    for(auto it = names.begin(); it != names.end(); it++){
      if(it->second == a){
        aint = it->first;
        // cout<<aint<<" "<<it->second<<"\n";
      }
      else if(it->second == b){
        bint = it->first;
        // cout<<bint<<" "<<it->second<<"\n";
      }
    }
    g.addEdge(bint, aint);
    indegree[aint]++;
  }

  g.topsort(indegree, names);
  return 0;
}