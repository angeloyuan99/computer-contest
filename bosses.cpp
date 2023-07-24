#include<iostream>
#include<vector>
using namespace std;
const long long MM = 1e6 + 7;
long long N, H, P;
long long input[MM];
long long height[MM];
vector<long long> arr;
int main(){
  cin >> N >> H >> P;
  long long counter = N, curr = 0, total = 0, ans = 0;
  for(long long i = 1; i <= N; i++){
    cin >> input[i];
    total += input[i];
    height[input[i]]++;
  }
  while(total > 0){
    ans += min(H, counter * P);
    curr++;
    total -= counter;
    counter -= height[curr];
  }
  cout<<ans<<"\n";
  return 0;
}