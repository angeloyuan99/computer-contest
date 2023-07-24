#include<iostream>
using namespace std;
int main(){
    int S, T;
    string s, t;
    cin >> S >> T >> s >> t;
    for(int i = 0; i < t.length(); i++){
        bool condition = true;
        for(int j = 0; j < s.length(); j++){
            if(t[i] == s[j]){
                condition = false;
                break;
            }
        }
        if(condition == true){
            cout<<-1<<"\n";
            return 0;
        }
    }
    int scounter = 0, tcounter = 0, total = 0;
    while(tcounter != T){
        total++;
        // cout<<total<<" "<<s[scounter]<<" "<<t[tcounter]<<"\n";
        if(s[scounter] == t[tcounter])tcounter++;
        scounter++;
        if(scounter == S)scounter = 0;
    }
    cout<<total<<"\n";
    return 0;
}