#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n, total = 0;
    cin >> n;
    stack <int> numbers;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(num == 0){
            numbers.pop();
        } else{
            numbers.push(num);
        }
    }
    while(!numbers.empty()){
        total += numbers.top();
        numbers.pop();
    }
    cout << total << "\n";
}