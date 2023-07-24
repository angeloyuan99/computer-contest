#include<iostream>
using namespace std;
int k, n;
int arr[11][21];
bool blah1(int a, int b){
  bool condition;
  for(int i = 0; i < n; i++){
    if(arr[0][i] == a){condition = true; break;}
    if(arr[0][i] == b){condition = false; break;}
  }
  for(int i = 1; i < k; i++){
    for(int j = 0; j < n; j++){
      if(arr[i][j] == a){
        if(!condition){
          return false;
        }
        break;
      }
      if(arr[i][j] == b){
        if(condition){
          return false;
        }
        break;
      }
    }
  }
  return true;
}
void blah(){
  int counter = 0;
  for(int i = 1; i <= n; i++){
    for(int j = i+1; j <= n; j++){
      if(blah1(i, j)){
        counter++;
      }
    }
  }
  cout<<counter<<"\n";
}
int main(){
  cin>>k>>n;
  for(int i = 0; i < k; i++){
    for(int j = 0; j < n; j++){
      cin>>arr[i][j];
    }
  }
  blah();
  return 0;
}
