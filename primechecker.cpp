#include <iostream> 
#include<string>
#include<vector>
using namespace std; 
bool isPrime(int n) 
{ 
  if (n <= 1) 
    return false; 
  for (int i = 2; i < n; i++) 
    if (n % i == 0) 
      return false; 
  return true; 
} 
int main() 
{ 
  for(int z = 0; z < 5; z++){
    string str;
    cin>>str;
    int temp = str.find('_');
    // cout<<temp<<"\n";
    vector<int> result;
    for(int i = 0; i <= 9; i++){
      str[temp] = i+'0';
      // cout<<str<<" "<<i<<"\n";
      if(isPrime(stoi(str)))result.push_back(i);
    }
    if(result.empty()){
      cout<<"Not possible"<<"\n";
    }
    else{
      for(auto it : result)cout<<it<<" ";
      cout<<"\n";
    }
  }
  return 0; 
} 