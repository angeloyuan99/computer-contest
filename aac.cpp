#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int total = 0;
    for(int i = 0; i <= k; i++){
        int temp = n;
      //  cout << temp << "\n";
        for(int j = 0; j < i; j++){
            temp *= 10;
  //          cout << temp << "\n";
        }
        total += temp;
        cout << total << "\n";
    }
    cout << total << "\n";
    return 0;
}