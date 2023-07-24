#include<iostream>
using namespace std;
int main(){
    int data, days;
    cin >> data >> days;
    int total = data;
    for(int i = 0; i < days; i++){
        int k;
        cin >> k;
        total += (data - k);
    }
    cout << total << "\n";
}