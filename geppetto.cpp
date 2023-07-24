#include<iostream>
#include<vector>
using namespace std;
vector<int> v [30];
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int ans = n;
    for(int b = 0; b < n; b++){
        vector<int>subset;
        for(int i = 0; i < n; i++){
            if(b&(1<<i)){
                subset.push_back(i+1);
            }
        }
        for(int i = 0; i < subset.size(); i++){
            bool stop = false;
            for(int r = 0; r < subset.size(); r++){
                if(i==r){
                    continue;
                }
                if(find(v[subset[i]].begin(), v[subset[i]].end(), subset[r])!=v[subset[i]].end()){
                    ans--;
                    stop = true;
                    break;
                }
            }
            if(stop){
                break;
            }
        }
    }
    cout <<  ans << "\n";
    return 0;
}  