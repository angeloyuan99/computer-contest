#include<iostream>
#include<string>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    char temp = a[0];
    a[0] = a[2];
    a[2] = temp;
}