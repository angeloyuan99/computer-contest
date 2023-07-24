#include<iostream>
#include<queue>
#include<cstring>
#include<utility>
using namespace std;
int main(){
    cin.sync_with_stdio(0); cin.tie(0);
    int people, comparisons;
    cin >> people >> comparisons;
    vector <int> graph1[people + 1];
    vector <int> graph2[people + 1];
    for(int i = 0; i < comparisons; i++){
        int x, y;
        cin >> x >> y;
        graph1[x].push_back(y);
        graph2[y].push_back(x);
    }
    int big, small;
    queue <int> larger, smaller;
    cin >> big >> small;
    larger.push(big);
    smaller.push(big);
    while(!larger.empty()){
        int cur = larger.front();
        larger.pop();
        if(cur == small){
            cout << "yes\n";
            return 0;
        }
        for(int i : graph1[cur]){
            larger.push(i);
        }
    }
    while(!smaller.empty()){
        int cur = smaller.front();
        smaller.pop();
        if(cur == small){
            cout << "no\n";
            return 0;
        }
        for(int i : graph2[cur]){
            smaller.push(i);
        }
    }
    cout << "unknown\n";
    return 0;
}