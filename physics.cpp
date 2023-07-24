#include<iostream>
using namespace std;
int main(){
    int num, height, jumpamount, temp = 0;
    cin >> num >> height >> jumpamount;
    for(int i = 0; i < num; i++){
        int input;
        cin >> input;
        if(input - temp <= height){

        } else if(input - temp <= height * 2 && jumpamount > 0){
            jumpamount--;
        } else{
            cout << "Unfair!\n";
            return 0;
        }
        temp = input;
    }
    cout << "Too easy!\n";
    return 0;
}