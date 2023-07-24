#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> highway = {0, 990, 1010, 1970, 2030, 2940, 3060, 3930, 4060, 4970, 5030, 5990, 6010, 7000};
int high, low, counter = 0;
void process(int current){
  if(current == highway.size()-1){
    counter++;
    return;
  }
  int counter = 0;
  for(int i = current + 1; i < highway.size(); i++){
    int temp = highway[i] - highway[current];
    if(temp > high)break;
    if(temp < low)continue;
    process(i);
  }
}
int main()
{
  ios_base::sync_with_stdio(false); 
  cin.tie(0); cout.tie(0);
  cin>>low>>high;
  int num;
  cin>>num;
  for(int i = 0; i < num; i++){
    int a;
    cin>>a;
    highway.push_back(a);
  }
  sort(highway.begin(), highway.end());
  process(0);
  cout<<counter<<"\n";
  return 0;
}