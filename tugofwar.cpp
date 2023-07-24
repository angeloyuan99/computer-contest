#include<iostream>
using namespace std;
typedef long long ll;
const ll MM = 2e6 + 7;
ll prefix[MM];
ll arr[MM];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);ios_base::sync_with_stdio(false);
  ll N;
  cin >> N;
  for(ll i = 1; i <= N; i++){
    cin>>arr[i];
    prefix[i] = prefix[i - 1] + arr[i];
  }
  for(ll i = N + 1; i <= N + N; i++){
    prefix[i] = prefix[i - 1] + arr[i - N];
  }
  // ll left = 1, splitting = 0;
  // for(ll i = 1; i <= N; i++){
  //   splitting = i;
  //   ll l = prefix[i], r = prefix[N] - prefix[i];
  //   if(l > r){
  //     break;
  //   }
  // }
  ll splitting = 1;
  for(ll left = 0; left < N; left++){
    ll right = left + N;
    while(prefix[splitting] - prefix[left] < prefix[right] - prefix[splitting]){
      splitting++;
    }
    cout<<min(prefix[splitting] - prefix[left] - (prefix[right] - prefix[splitting]), prefix[right] - prefix[splitting - 1] - (prefix[splitting - 1] - prefix[left]));
    if(left != N - 1)cout<<" ";
  }
  cout<<"\n";
  return 0;
}