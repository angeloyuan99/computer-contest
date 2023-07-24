#include<iostream>
using namespace std;
int main(){
    int people, first, amount;
    cin >> people >> first >> amount;
    int total = first, num = first, counter = 0;
    while(total <= people){
        num *= amount;
        total += num;
        counter++;
      //  cout << counter << ": " << total << "\n";
    }
    cout << counter << "\n";
}