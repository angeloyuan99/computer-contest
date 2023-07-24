#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int j = 0; j < n; j++){
        int f, k, total = 0, counter = 0;
        cin >> f >> k;
        for(int i = 0; i < f; i++){
            int a;
            cin >> a;
            total += a;
            if(total >= k){
                counter++;
                total = 0;
            }
        }
        cout << counter << "\n";
    }
    return 0;

}