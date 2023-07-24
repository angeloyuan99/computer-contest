#include <iostream>
using namespace std;
bool isNasty(int num){
    if(num%6==0) return true;
    else return false;
}
int main()
{
    int tests, num;
    cin>>tests;
    for(int i = 0; i < tests; i++){
        cin>>num;
        if(isNasty(num)) cout<<num<<" is nasty"<<endl;
        else cout<<num<<"  is not nasty"<<endl;
    }
    return 0;
}