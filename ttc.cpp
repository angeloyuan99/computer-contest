#include<iostream>
using namespace std;
int main()
{
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total;
    cin>>total;
    for(int i = 0; i < 12; i++){
        if(total - months[i]<=0){
            if(i+1<10) cout<<"0"<<i+1<<"/";
            else cout<<i+1<<"/";
            if(total<10) cout<<"0"<<total<<endl;
            else cout<<total<<endl;
            break;
        }
        else total = total - months[i];
    }
    return 0;
}
