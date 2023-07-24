#include<iostream>
using namespace std;
bool hi(string asdf){
    cout << asdf << "\n";
    return false;
}
int main(){
    string h;
    cin >> h;
    hi(h);
}