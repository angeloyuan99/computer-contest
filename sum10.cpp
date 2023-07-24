#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin >> n >> m;
    int counter = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i + j == 10){
                counter++;
            }
        }
    }
    if(counter == 1){
        cout << "There is 1 way to get the sum 10.\n";
        return 0;
    }
    cout << "There are " << counter << " ways to get the sum 10.\n";
    return 0;
}