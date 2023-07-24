#include<iostream>
using namespace std;
int freq[1000001];
int main(){
  int N;
  cin >> N;
  for(int i = 0; i < N; i++){
    int input;
    cin>>input;
    freq[input]++;
  }
  int counter = 0, highestnum = 0; 
  for(int i = 1000000; i > 0; i--){
    // cout<<i<<"\n";
    if(freq[i] > highestnum){
      counter += i * (freq[i] - highestnum);
      highestnum = freq[i];
    }
  }
  cout<<counter<<"\n";
  return 0;
}