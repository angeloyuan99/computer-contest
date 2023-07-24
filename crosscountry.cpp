#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    if(str == "MG") cout<<"midget girls"<<endl;
    else if(str == "MB") cout<<"midget boys"<<endl;
    else if(str == "JG") cout<<"junior girls"<<endl;
    else if(str == "JG") cout<<"junior boys"<<endl;
    else if(str == "SG") cout<<"senior girls"<<endl;
    else if(str == "SB") cout<<"senior boys"<<endl;
    else cout<<"invalid code"<<endl;
    return 0;
}
