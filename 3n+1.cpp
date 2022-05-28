#include<iostream>
using namespace std;
int main(){
    int input, counter = 0;
    cin >> input;
    while(true){
        if(input == 1){
            break;
        }
        if(input % 2 == 1){
            input *= 3;
            input += 1;
        } else{
            input /= 2;
        }
        counter++;
    }
    cout << counter << "\n";
    return 0;
}