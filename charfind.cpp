 #include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int counter=0;
    char letter;
    string sen;
    cin>>letter;
    //    cout<<letter<<endl;
    cin>>ws;
    getline(cin,sen);
    cout<<sen<<endl;
//    cout<<letter<<" "<<sen.find(letter)<<endl;
    int temo = ((int)letter);
    if(temo>60)temo-=32;
    else temo+=32;
    char temp = ((char)temo);
    while(sen.find(letter)!=string::npos){
        sen = sen.replace(sen.find(letter),1," ");
//        cout<<"sen:  "<<sen<<endl;
        counter=counter+1;
        //       cout<<"counter:  "<<counter<<endl;
    }
    while(sen.find(temp)!=string::npos){
        sen = sen.replace(sen.find(temp),1," ");
//        cout<<"sen:  "<<sen<<endl;
        counter=counter+1;
        //       cout<<"counter:  "<<counter<<endl;
    }
    cout<<counter<<endl;
    return 0;
}
