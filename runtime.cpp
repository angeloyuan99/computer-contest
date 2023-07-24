#include<iostream>
using namespace std;
void recur(int n){
    int total = 1, counter = 0;
    for(int i = n; i > 0; i -= 2){
        total *= i;
        counter++;
    }
    for(int i = 1; i <= (total - counter); i++){
        cout << i + counter << " ";
    }
}
int main(){
    int n;
    cin >> n;
    recur(n);
}
//8!! = 384
//7!! = 105