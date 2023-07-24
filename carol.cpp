#include<iostream>
using namespace std;
int main(){
    int num, sub, total = 0;
    cin >> num >> sub;
    for(int i = 0; i < num; i++){
        total += i;
    }
    cout << total - sub << "\n";
}