#include<iostream>
using namespace std;
int main(){
    int n, starting;
    cin >> n >> starting;
    for(int i = 0; i < n; i++){
        char input;
        cin >> input;
        if(input == 'x' && starting != 0){
            starting--;
        } else if(input == 'o'){
            starting++;
        }
    }
    cout << starting << "\n";
}