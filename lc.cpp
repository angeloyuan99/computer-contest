#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i = 0; i < t; i++){
    string curr;
    cin>>curr;
    for(int i = 0; i < curr.size(); i++){
      int temp = curr[i];
      if(temp >= 65 && temp <= 90)cout<<char(temp + 32);
      else cout<<curr[i];
    }
    cout<<"\n";
  }
  return 0;
}