#include<iostream>
#include<map>
using namespace std;
int main()
{
  int n, s, l;
  cin>>n>>s>>l;
  map<int, pair<int, int>> left;
  map<int, pair<int, int>> right;
  for(int i = 0; i < n; i++){
    int p, m, g;
    cin>>p>>m>>g;
    if(p < s){
      auto temp = pair<int, int>(m, g);
      left.insert(pair<int, pair<int, int>> (p, temp));
    }
    else{
      auto temp = pair<int, int>(m, g);
      right.insert(pair<int, pair<int, int>> (p, temp));
    }
  }
  // cout<<"left\n\n";
  // for(auto it : left)cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<"\n";
  // cout<<"\nright\n\n";
  // for(auto it : right)cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<"\n";
  // cout<<"\n";
  while(true){
    // cout<<l<<" "<<rit->second.first<<" "<<it->second.first<<"\n";
    if(!left.empty() && left.rbegin()->second.first <= l){
      l += left.rbegin()->second.second;
      left.erase(prev(left.end()));
      continue;
    }
    if(!right.empty() && right.begin()->second.first <= l){
      l += right.begin()->second.second;
      right.erase(right.begin());
      continue;
    }
    break;
  }
  cout<<l<<"\n";
  return 0;
}