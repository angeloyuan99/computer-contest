#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int max1 = 0, max2 = 0;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        if(input <= 100){
            if(input >= max1 && input >= max2){
                if(max1 >= max2){
                    max2 = max1;
                }
                max1 = input;
            } else if(input >= max2){
                max2 = input;
            }
        }
    }
    cout << max1 + max2 << "\n";
}