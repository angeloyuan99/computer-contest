#include<iostream>
#include<string>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < b.length(); i++){
    if(a.find(b) != string::npos) {
        cout << "yes" << '\n';
        return 0;
    }
        b = b.substr(1, b.length() - 1) + b[0];
    }
    cout << "no" << "\n";
}