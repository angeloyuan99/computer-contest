#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int row[n + 1], column[k + 1];
    for(int i = 0; i <= n + 1; i++){
        row[i] = 0;
    }
    for(int i = 0; i <= k + 1; i++){
        column[i] = 0;
    }
    int slash;
    cin >> slash;
    for(int i = 0; i < slash; i++){
        char input;
        cin >> input;
        if(input == 'C'){
            int a;
            cin >> a;
            column[a]++;
        } else{
            int a;
            cin >> a;
            row[a]++;
        }
    }
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= k; j++){
    //         cout << column[j] + row[i] << " ";
    //     }
    //     cout << "\n";
    // }
    int total = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= k; j++){
          //  cout << column[i] + row[j] << " ";
            if(((column[j] + row[i]) % 2) != 0){
                total++;
             //   cout << i << " " << j << "\n";
            }
        }
        //cout << "\n";
    }
    cout << total << "\n";
}