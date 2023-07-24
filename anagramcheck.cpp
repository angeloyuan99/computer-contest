#include <iostream>
#include<string.h>
using namespace std;
string replaceAll(string str1, string str2, string str3){
    int index = str1.find(str2);
    while(index>=0){
        str1 = str1.substr(0, index)+str3+str1.substr(index+str2.length(),str1.length()-(index+str2.length()));
        index=str1.find(str2);
    }
    return str1;
}
int main()
{
    string str1, str2;
    getline(cin,str1);
    getline(cin, str2);
    str1 = replaceAll(str1, " ", "");
    str2 = replaceAll(str2, " ", "");
    for(int i = 0; i < str1.length(); i++){
        int index = str2.find(str1[i]);
        if(index>=0){
            str2 = str2.substr(0,index)+str2.substr(index+1,(str2.length()-index-1));
        }
    }
    if(str2 == "")cout<<"Is an anagram."<<endl;
    else cout<<"Is not an anagram."<<endl;
    return 0;
}
