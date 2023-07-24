#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int people[n];
    for(int i = 0; i < n; i++){
        cin >> people[i];
    }
    pair<int, int> connections[n - 1];
    for(int i = 0; i < n - 1; i++){
        cin >> connections[i].first >> connections[i].second;
    }
}