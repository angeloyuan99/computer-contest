#include<iostream>
using namespace std;
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}int main(){
    int m;
    int check = 2;
    int primecounter = 0;
    cin >> m;
    while(primecounter != m){
        if(isPrime(check) == true){
            cout << check << " ";
            primecounter++;
            if(primecounter % 10 == 0){
                cout << "\n";
            }
        }
        check++;
    }
}