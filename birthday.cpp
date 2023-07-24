#include<iostream>
#include<deque>
using namespace std;
typedef long long ll;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  ll N;
  cin>>N;
  // cout<<N<<"\n";
  deque<pair<ll, ll>> stack;
  ll counter = 0;
  for(ll i = 0, t; i < N; i++){
    cin>>t;
    // counter += stack.size();
    pair<ll, ll> curr = {t, 1};
    while(!stack.empty() && stack.back().first <= t){
      if(stack.back().first == t)curr.second += stack.back().second;
      counter += stack.back().second;
      stack.pop_back();
    }
    if(!stack.empty())counter++;
    // counter += min(1, stack.size());
    stack.push_back(curr);
    // cout<<t<<" "<<counter<<"\n";
  }
  cout<<counter<<"\n";
  return 0;
}