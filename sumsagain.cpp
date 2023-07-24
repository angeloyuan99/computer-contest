#include<iostream>
using namespace std;
int main(){
    int n, counter = 0;
    cin >> n;
    for(int i = 1; i <= (n/4); i++){
        if((n - (i*4)) % 5 == 0){
            counter++;
        }
     //   cout << n << " " << i << " " << n - (i * 4) << "\n";
    }
    if((n % 5) == 0){
        counter++;
    }
    cout << counter << "\n";
}