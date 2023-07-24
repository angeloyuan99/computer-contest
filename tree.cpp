#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int colours[n], start[m], end[m];
    for(int i = 0; i < n; i++){
        cin >> colours[i];
    }
    for(int i = 0; i < m; i++){
        cin >> start[i] >> end[i];
    }
}
// 4 2
// 1 2 3 4
// 1 3
// 2 3