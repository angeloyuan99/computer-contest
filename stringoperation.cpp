#include<iostream>
#include<string>
using namespace std;
void smalleststring(string s, int a){ 
    string Str = s.substr(0, a); 
    string Min = Str; 
    for (int i = a; i < s.length(); i++) { 
        Str = Str.substr(1, a) + s[i]; 
        if (Min > Str){
            Min = Str;
        }
    } 
    cout << Min << "\n";
}
int main(){
    string string;
    int a;
    cin >> string >> a;
    smalleststring(string, a);
    return 0;
}