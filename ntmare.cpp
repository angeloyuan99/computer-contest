#include<iostream>
using namespace std;
int main(){
    int n, queries;
    cin >> n >> queries;
    int maxleft[n], maxright[n], input[n], freqleft[n], freqright[n];
    freqleft[0] = 1;
    freqright[0] = 1;
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }
    maxleft[0] = input[0];
    maxright[n - 1] = input[n - 1];
    int maxl = input[0], maxr = input[n - 1];
    for(int i = 1; i < n; i++){
        if(input[i] > maxl){
            maxl = input[i];
        } else if(input[i] == maxl){
            freqleft[i] = (freqleft[i - 1] + 1);
            continue;
        }
        freqleft[i] = 1;
        maxleft[i] = maxl;
    }
    for(int i = n - 2; i >= 0; i--){
        if(input[i] > maxr){
            maxr = input[i];
        } else if(input[i] == maxr){
            freqright[i] = (freqright[i + 1] + 1);
            continue;
        }
        freqright[i] = 1;
        maxright[i] = maxr;
    }
    for(int i = 0; i < queries; i++){
        int a, b;
        cin >> a >> b;
        if(maxleft[a - 1] > maxright[b + 1]){
            cout << maxleft[a - 1] << " " << freqleft[a - 1] << "\n";
        } else if(maxright[b + 1] > maxleft[a - 1]){
            cout << maxright[b + 1] << " " << freqright[b + 1] << "\n";
        } else{
            cout << maxright[b + 1] << " " << freqright[b + 1] + freqleft[a - 1] << "\n";
        }
        
    }
    // for(int i = 0; i < n; i++){
    //     cout << maxleft[i] << " ";
    // }
    // cout << "\n";
    // for(int i = 0; i < n; i++){
    //     cout << maxright[i] << " ";
    // }
    // cout << "\n";

}
// 7 2
// 5 4 5 2 3 1 5
// 2 4
// 1 6