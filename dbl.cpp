#include<iostream>
#include<string>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long ans = n * 2;
    string men = to_string(ans);
    men = men.substr(0, men.size() - 1);
    cout << n - stoll(men);
}