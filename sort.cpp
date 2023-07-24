#include <iostream>
using namespace std;
bool isprime(int num){
    if(num == 1) return false;
    int factors = 0;
    for(int i = 1; i <= num/2; i++){
        if(num%i == 0){
            factors++;
        }
        if(factors>1)return false;
    }
    return true;
}
int main()
{
    int num;
    cin>>num;
    for(int i = 1; i <= num; i++){
        if(isprime(i))cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}