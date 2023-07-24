#include<iostream>
using namespace std;
int a[200005];
int main(){
    int x, y, potatosneeded;
    cin >> x >> y >> potatosneeded;
    for(int i = 0; i < y; i++){
        int x1, y1;
        cin >> x1 >> y1;
        a[x1 - 1]++;
        a[y1]--;
    }
    for(int i = 1; i < y; i++){
        a[i] += a[i - 1];
    }
    for(int i = 0; i < y; i++){
        cout << a[i] << "\n";
    }
    cout << "\n";
    int shortestsequence = 10000000;
    for(int i = 0; i < y; i++){
        for(int j = i + 1; j < y; j++){
            if(a[j] - a[i] > potatosneeded){

            }
        }
    }
    if(shortestsequence == 10000000){
        cout << "-1\n";
        return 0;

    }
    cout << shortestsequence << "\n";
}
// 5 5 6
// 2 5
// 1 3
// 4 5
// 3 3
// 1 2

// 3 4 7
// 2 3
// 1 2
// 1 3
// 2 2