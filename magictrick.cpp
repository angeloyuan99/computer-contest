#include<iostream>
using namespace std;
int main(){
  for(int z = 0, num; z < 5; z++){
    cin>>num;
    bool vist[num];
    int arr[num];
    bool condition = false;
    for(int i = 0; i < num; i++)vist[i] = false;
    for(int i = 0, t; i < num; i++){
      cin>>t;
      t++;
      int counter = num - 1, ans = 0;
      while(ans != t && counter >= 0){
        if(!vist[counter])ans++;
        counter--;
      }
      counter++;
      if(ans != t || counter < 0)condition = true;
      else{
        vist[counter] = true;
        arr[i] = counter;
      }
    }
    if(condition)cout<<"IMPOSSIBLE\n";
    else{
      for(int i = 0; i < num; i++)cout<<arr[i] + 1<<" ";
      cout<<"\n";
    }
  }
  return 0;
}