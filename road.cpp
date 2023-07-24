#include<iostream>
#include<string>
using namespace std;
string str;
int num;
bool process(int middle){
  for(int i = 0; i < num - middle; i++){
    string temp = str.substr(i, middle);
    // cout<<temp<<": ";
    for(int j = 0; j < num - middle + 1; j++){
      string t = str.substr(j, middle);
      // cout<<t<<" ";
      if(t == temp && i != j){
        // cout<<t<<" "<<temp<<"\n";
        return false;
      }
    }
    // cout<<"\n";
  }
  return true;
}
int main(){
  // num = 10;
  // str = "abcdeabcde";
  // if(!process(5))cout<<"pass\n";
  cin>>num;
  cin>>str;
  int min = 1, max = num, middle = (min + max) / 2;
  // cout<<max<<" "<<min<<" "<<middle<<"\n";
  while(max > min){
    if(process(middle)){
      max = middle - 1;
    }
    else{
      min = middle;
    }
    middle = (min + max) / 2;
    // cout<<max<<" "<<min<<" "<<middle<<"\n";
    if(min == middle){
      middle+=1;
    }
  }
  // cout<<min<<" "<<max<<" "<<middle<<"\n";
  cout<<middle<<"\n";
  return 0;
}