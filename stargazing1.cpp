#include<iostream>
#include<utility>
using namespace std;
int main(){
    int n;
    cin >> n;
    pair <int, int> xandy[n];
    for(int i = 0; i < n; i++){
        xandy[i].first = 0;
        xandy[i].second = 0;
    }
    for(int i = 1; i < n; i++){
        int number, x, y;
        cin >> number >> x >> y;
        xandy[i].first += xandy[number - 1].first;
        xandy[i].first += x;
        xandy[i].second += xandy[number - 1].second;
        xandy[i].second += y;
       // cout << "planet " << i + 1 << ": X: " << xandy[i].first << " Y: " << xandy[i].second << "\n" << i << " " << number - 1 << " " << xandy[number - 1].first << " " << xandy[number - 1].second << "\n";
    }
    // for(int i = 0; i < n; i++){
    //     cout << "planet " << i + 1 << ": X: " << xandy[i].first << " Y: " << xandy[i].second << "\n";
    // }
    int distinct = 0;
    for(int i = 0; i < n; i++){
        bool condition = true;
        for(int j = i + 1; j < n; j++){
            if(xandy[i].first == xandy[j].first && xandy[i].second == xandy[j].second){
                condition = false;
            }
        }
        if(condition){
            distinct++;
        }
    }
    cout << distinct<< "\n";
    return 0;

}
// 5
// 1 7 8
// 2 3 2
// 1 10 10
// 4 -5 -5