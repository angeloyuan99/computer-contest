#include<iostream>
using namespace std;
int main(){
    int n, numE = 0, numO = 0;
    cin >> n;
    bool status[n];
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        if(input % 2 == 0){
            numE++;
        } else{
            numO++;
        }
    }
    while(numO > numE){
        numO -= 2;
        numE++;
    }
    if(numE > numO + 1){
        numE = numO + 1;
    }
    cout << numE + numO << "\n";
    return 0;
    
}