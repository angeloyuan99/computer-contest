#include<iostream>
#include<map>
#include<climits>
using namespace std;
int main(){
  int num;
  cin >> num;
  map<int, int> first;
  map<int, string> second;
  for(int i = 0; i < num; i++){
    string str;
    int number;
    cin>>str>>number;
    first.insert(pair<int, int>(number, 0));
    second.insert(pair<int, string>(number, str));
  }
  cin>>num;
  for(int i = 0; i < num; i++){
    int n;
    cin>>n;
    first[n]++;
  }
  int max = 0, index = 0;
  for(auto it = first.begin(); it != first.end(); it++){
    if(it->second>max){
      max = it->second;
      index = it->first;
    }
  }
  cout<<second[index]<<"\n";
  return 0;
}