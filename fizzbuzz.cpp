#include <bits/stdc++.h>

using namespace std;

long long solve(long long n) {
  return n - n/3 - n/5 + n/15;
}

long long solve2(long long n) {
  long long l = 15 * n / 8;
  if(l % 3 == 0 || l % 5 == 0) {
    if (solve(l - 1) == n) l = l - 1;
    else l = l + 1;
  }

  return l;
}

long long solve3(long long n) {
  long long counter = 1;
  while(n != 1){
    counter++;
    if(counter % 3 == 0 || counter % 5 == 0)continue;
    n--;
  }

  return counter;
}

int main() {
  long long n;
  cin >> n;

  // cout << solve(n) << "\n";
  //if(solve2(n) == 1863485) cout << solve2(n) << " " << n << "\n";
  cout << solve2(n) << "\n";
  //cout << solve3(n) << "\n";
  return 0;
}
