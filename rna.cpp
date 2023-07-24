#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string type = "both";
    for(int i = 0; i < n; i++){
        char input;
        cin >> input;
        if(input != 'A' && input != 'C' && input != 'G'){
            cout << "neither\n";
            return 0;
        }
    }
}