#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int police[1000001]; 
int n;
vector<bool> visited(1000001,false);
vector<int> policeorder;
int main(){
    cin.sync_with_stdio(0);cin.tie(0);
    cout.sync_with_stdio(0);cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> police[i];
        if(!visited[police[i]]) {
            policeorder.push_back(police[i]);
            visited[police[i]] = true;
        }
    }
    if(n == 1){
        cout << "-1\n";
        return 0;
    }
    bool condition = true;
    for(int i = 0; i < n - 1; i++){
        if(police[i] != police[i + 1]){
            condition = false;
            break;
        }
    }
    if(condition){
        cout << "-1\n";
        return 0;
    }
    stack<int> nopolice;
    for(int i=1; i<=n; i++) {
        if(!visited[i]) nopolice.push(i);
    }
    vector<int> path;
    for(int i=0; i<n; i++) {
        bool found = false;
        for(int j=policeorder.size() - 1; j>=0; j--) {
            // cout << "i:" << i << " p:"<< police[i] << " j:" << j << " p:" << policeorder[j] << "\n";
            if(police[i] != policeorder[j]) {
                path.push_back(policeorder[j]);
                found = true;
                policeorder.erase(policeorder.begin() + j);
                break;
            }
        }
        if(!found) {
            int k = nopolice.top();
            nopolice.pop();
            path.push_back(k);
        }
        // cout << "path " << i << ": " << path.back() << "\n";
    }
    for(int i = 0; i < n; i++){
        cout << path[i] << " ";
    }
    cout << "\n";
   return 0;
}