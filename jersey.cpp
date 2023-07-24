#include<iostream>
using namespace std;
int main()
{
  int numofj, numofa;
  cin>>numofj>>numofa;
  int jerseys[numofj];
  for(int i = 0; i < numofj; i++){
    char temp;
    cin>>temp;
    if(temp == 'S'){
      jerseys[i] = 1;
    }
    else if(temp == 'M'){
      jerseys[i] = 2;
    }
    else if(temp == 'L'){
      jerseys[i] = 3;
    }
  }
  int counter = 0;
  for(int i = 0; i < numofa; i++){
    char temp;
    int num, size;
    cin>>temp>>num;
    if(temp == 'S'){
      size = 1;
    }
    else if(temp == 'M'){
      size = 2;
    }
    else if(temp == 'L'){
      size = 3;
    }
    if(jerseys[num-1]>=size){
      // cout<<num<<" "<<jerseys[num-1]<<" "<<size<<"\n";
      jerseys[num-1] = 0;
      counter++;
    }
  }
  cout<<counter<<"\n";
  return 0;
}