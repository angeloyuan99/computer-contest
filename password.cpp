#include<iostream>
#include <string.h>
using namespace std;
int type(char digit){
    char upper[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char lower[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char number[10] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for(int i = 0; i < 26; i++){
        if(digit == lower[i]) return 1;
        else if(digit == upper[i]) return 2;
    }
    for(int i = 0; i < 10; i++){
        if(digit == number[i]) return 3;
    }
    return 0;
}
int main()
{
    string word;
    int upper = 2, lower = 3, number = 1;
    cin>>word;
    if(word.length()<8||word.length()>12) cout<<"Invalid"<< "\n";
    else{
        for(int i = 0; i < word.length(); i++){
            int index = type(word[i]);
            if(index == 1) upper--;
            else if(index == 2) lower--;
            else if(index == 3) number--;
        }
        if(lower<=0&&upper<=0&&number<=0) cout<<"Valid"<< "\n";
        else cout << "Invalid" << "\n";
    }
    return 0;
}
