#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        int num, sum = 0;
        cin >> num;
        for(int i = 1; i < num; i++){
            if(num % i == 0){
                sum += i;
            }
        }
        if(sum < num){
            cout << num << " is a deficient number.\n";
        } else if(sum == num){
            cout << num << " is a perfect number.\n";
        }else{
            cout << num << " is an abundant number.\n";
        }
    }
}
//Deficient, Perfect, and Abundant