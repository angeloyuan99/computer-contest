#include <iostream>
#include<string>
using namespace std;
bool same(int num){
    string word = to_string(num);
    char strarr[word.length()];
    char chararr[word.length()];
    for(int i = 0; i < word.length(); i++){
        strarr[i] = word[i];
    }
    for(int i = 0; i < word.length(); i++){
        chararr[word.length()-i-1] = strarr[i];
    }
    for(int i = 0; i < word.length(); i++){
        if(chararr[i] == '0' ||chararr[i] == '1' ||chararr[i] == '8'){
            continue;
        }
        else if(chararr[i] == '6') chararr[i] = '9';
        else if(chararr[i] == '9') chararr[i] = '6';
        else{
            return false;
        }
    }
    for(int i = 0; i < word.length(); i++){
        if(chararr[i] != strarr[i]) return false;
    }
    return true;
}
int main()
{
    int bottom, top, counter = 0;
    cin>>bottom>>top;
    for(int i = bottom; i <= top; i++){
        if(same(i)) counter++;
    }
    cout<<counter<<endl;
}
