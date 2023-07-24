#include<iostream>
#include<vector>
using namespace std;
void print(vector<float> streams){
  for(unsigned int i = 0; i < streams.size(); i++){
    cout<<streams[i]<<" ";
  }
  cout<<"\n";
}
int main()
{
  int num;
  vector<float> streams;
  cin>>num;
  for(int i = 0; i < num; i++){
    float temp;
    cin>>temp;
    streams.push_back(temp);
  }
  // print(streams);
  int input;
  cin>>input;
  while(input!=77){
    if(input == 99){
      float stream, percent, newflow;
      cin>>stream>>percent;
      percent/=100;
      stream--;
      newflow = streams[stream]*percent;
      // cout<<newflow
      streams[stream]-=newflow;
      vector<float>::iterator it = streams.begin();
      it = streams.insert(it+stream, newflow);
    }
    else if(input == 88){
      int index;
      cin>>index; 
      index--;
      streams[index]+=streams[index+1];
      streams.erase(streams.begin()+index+1);
    }
    cin>>input;
  }
  print(streams);
  return 0;
}