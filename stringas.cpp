#include<iostream>
using namespace std;
int main(){
    string a;
    cin >> a;
    int used[26];
    for(int i = 0; i < 26; i++){
        used[i] = 0;
    }
    for(int i = 0; i < a.length(); i++){
        used[a[i] - 97]++;
    }
    bool stringcomplete = false;
    string string;
    while(stringcomplete == false){
        
    }
}