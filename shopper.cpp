#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int test;
    cin >> test;
    for(int z = 0; z < test; z++){
        int n;
        cin >> n;
        map<string, vector<pair<int, int> > > stores;
        for(int i = 0, t; i < n; i++){
            cin >> t;
            for(int j = 0; j < t; j++){
                string name;
                int price, amount;
                cin >> name >> price >> amount;
                stores[name].push_back({price, amount});
            }
        }
        int q, total = 0;
        cin >> q;
        for(int i = 0; i < q; i++){
            string name;
            int amount;
            cin >> name >> amount;
            sort(stores[name].begin(), stores[name].end());
            for(auto it : stores[name]){
                if(it.second >= amount){
                    total += it.first * amount;
                    break;
                }
                else{
                    total += it.first * it.second;
                    amount -= it.second;
                }
            }
        }
        cout << total << "\n";
    }
}