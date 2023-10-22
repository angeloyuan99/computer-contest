#include<iostream>
using namespace std;
int heights[1001000], rides[1001000];
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int D;
        cin >> D;
        heights[0]++;
        heights[D + 1]--;
    }
    for(int i = 1; i <= 1001000; i++){
        heights[i] += heights[i - 1];
    }
    for(int i = 0; i < m; i++){
        int blah;
        cin >> blah;
        cout << heights[blah] << "\n";
    }
}