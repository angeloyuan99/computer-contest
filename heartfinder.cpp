#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    cin >> ws;
    for(int i = 0; i < a; i++){
        string text;
        getline(cin, text);
        string subtext = "<3";
        int heartnum = text.find(subtext);
        int heartcount = 1;
        while(heartnum != string::npos){
            heartnum = text.find(subtext, heartnum + 1);
            heartcount++;
            cout << "<3 ";
        }
        cout << "<3\n";
    }
}