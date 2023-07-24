#include<iostream>
using namespace std;
int main(){
    int num, bx=-1000000,sx=1000000,by=-1000000,sy=1000000;
    cin>>num;
    for(int i = 0; i < num; i++){
        int x, y;
        cin>>x>>y;
        if(x<sx)sx = x;
        if(x>bx)bx = x;
        if(y<sy)sy = y;
        if(y>by)by = y;
    }
    int total = 0;
    total += bx-sx;
    total += by-sy;
    total*=2;
    cout<<total<<"\n";
    return 0;
}