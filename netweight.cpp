#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
const int MAXN = 100001;
int t, p[MAXN], dp[MAXN];
vector<int>primes;
void initialize(){
  for(int z = 2; z < MAXN; z++){
    for(int i = 2 * z; i < MAXN; i += z) p[i] = true;
  }
  for(int z = 2; z < MAXN; z++){
    if(!p[z]) primes.push_back(z);
  }
  dp[0] = 0;
  dp[1] = 0;
  dp[2] = 0;
}
bool solve(int i){
  if(dp[i] != -1) return dp[i];
  bool out = 0;
  for(int z = 0; i - primes[z] > 0 && z < primes.size(); z++){
    out = !solve(i - primes[z]) || out;
  }
  return dp[i] = out;
}
int main() {
  ios::sync_with_stdio(false); cin.tie(NULL);
  initialize();
  memset(dp, -1, sizeof dp);
  memset(p, 0, sizeof p);
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    if(n <= 2){
      cout << -1 << '\n';
      continue;
    }
    for(int z = 1; z < n - 2; z++) cout << z << " ";
    if(solve(n)) cout << n - 2 << ' ' << n - 1 << ' ' << n << '\n';
    else if(solve(n - 1)) cout << n - 2 << ' ' << n << ' ' << n - 1 << '\n';
    else cout << n << ' ' << n - 2 << ' ' << n - 1 << '\n';
  }
} 