#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
void next(string str, string characters){
    if(characters.size() == 0){
        cout << str << "\n";
        return;
    } else{
        for(int i = 0; i < characters.size(); i++){
            string newstr = str + characters[i];
            string newcharacters = characters.substr(0, i) + characters.substr(i + 1);
          //  cout << newstr << " " << newcharacters << "\n";
            next(newstr, newcharacters);
        }
    }
}
int main(){
    string a;
    cin >> a;
    string characters = a;
    sort(characters.begin(), characters.end());
    next("", characters);
}