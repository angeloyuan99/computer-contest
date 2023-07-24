#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int solution = n * 5 - 400;
    cout << solution << "\n";
    if(solution < 100){
        cout << 1 << "\n";
    } else if(solution == 100){
        cout << 0 << "\n";
    } else{
        cout << -1 << "\n";
    }
    return 0;
    
}