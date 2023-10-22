#include<iostream>
using namespace std;
int main()
{
  long long N;
  cin>>N;
  long long total = 0, high = 0;
  for(long long i = 0, t; i < N; i++){
    cin>>t;
    total += t;
    high = max(high, t);
  }
  if(total - high >= high && total % 2 == 0)cout<<"YES\n";
  else{
    cout<<"NO\n";
  }
  return 0;
}