#include <iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <char> characters;
    vector <string> codes;
    for(int i = 0; i < n; i++){
        char input;
        string bin;
        cin >> input >> bin;
        characters.push_back(input);
        codes.push_back(bin);
    }
    string binary, newstring;
    cin >>  binary;
    int lastchar = 0;
    while(lastchar != binary.size()){
        for(int i = 0; i < characters.size(); i++){
            if(codes[i] == binary.substr(lastchar, codes[i].size())){
                newstring = newstring + characters[i];
                lastchar = lastchar + codes[i].size();
                continue;
            }
        }
    }
    return 0;
}