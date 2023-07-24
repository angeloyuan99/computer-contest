#include <iostream>
using namespace std;
int main()
{
    int acounter = 0, bcounter = 0;
    while(acounter!=4&&bcounter != 4){
        int a, b;
        cin>>a>>b;
        if(a>b)acounter++;
        else bcounter++;
    }
    cout<<acounter<<" "<<bcounter<<endl;
    return 0;
}