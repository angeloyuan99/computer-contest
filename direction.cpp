#include<iostream>
using namespace std;
int main()
{
    int num, degrees;
    cin>>num;
    for(int i = 0; i < num; i++){
        cin>>degrees;
        if(degrees<=45){
            cout<<"N"<<endl;
        }
        else if(degrees<=135){
            cout<<"E"<<endl;
        }
        else if(degrees<=225){
            cout<<"S"<<endl;
        }
        else if(degrees<315){
            cout<<"W"<<endl;
        }
        else cout<<"N"<<endl;
    }
    return 0;
}
