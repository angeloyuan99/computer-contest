#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    cin >> ws;
    for(int i = 0; i < a; i++){
        string text;
        getline(cin, text);
        int heartnum = text.find("<3");
        int heartcount = 1;
        while(heartnum != string::npos){
            heartnum = text.find("<3", heartnum + 2);
            heartcount++;
            cout << heartnum << " " << heartcount << "\n";
        }
        cout << heartnum << "\n";
        for(int i = 0; i < heartcount; i++){
            cout << "<3 ";
        }
        cout << "\n";
    }
}