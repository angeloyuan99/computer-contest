#include<iostream>
using namespace std;
string reversestring(string s){
    for(int i = 0; i < s.length() / 2; i++){
        char temp = s[i];
        s[i] = s[s.length() - (i + 1)];
        s[s.length() - (i + 1)] = temp;
    }
    return s;
}
int main(){
    string s;
    cin >> ws;
    getline(cin, s);
    string wordfind;
    cin >> wordfind;
    s = reversestring(s);
    int find = s.find(wordfind);
    cout << s.length() - find << "\n";
    return 0;
}