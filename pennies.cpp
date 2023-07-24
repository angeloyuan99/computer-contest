#include<iostream>
using namespace std;
unsigned long long radius = -1, sradius;
bool inCircle(int x, int y){
    if(x*x + y*y <= sradius){
      return true;
    }
  return false;
}
int main(){
  cin>>radius;
  while(radius != 0){
    sradius = radius*radius;
    int counter = 0;
    for(unsigned long long int i = 1; i <= radius; i++){
      for(unsigned long long int j = 0; j <= radius; j++){
        if(inCircle(i, j)){
          counter++;
        }
      }
    }
    cout << counter*4 + 1<<"\n";
    cin>>radius;
  }
  return 0;
}