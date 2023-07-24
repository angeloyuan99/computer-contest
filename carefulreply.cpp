#include<iostream>
using namespace std;
int main(){
    int n;
    for(int i = 0; i < n; i++){
        string text;
        getline(cin, text);
        cin >> ws;
        int heartnum = 0;
        while(heartnum != string::npos){
            heartnum = text.find("<3", heartnum + 2);
            cout << "<3 ";
        }
        cout << "<3\n";
    }
}