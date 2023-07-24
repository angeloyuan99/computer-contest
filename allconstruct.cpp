#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;
int n;
string arr[10000];
vector<vector<string> > result[10000];
vector<vector<string> > allconstruct(string target){
    if(target == ""){
        return {{}};
    }
    int num = target.size();
    if(!result[num].empty()){
        return result[num];
    }
    for(int i = 0; i < n; i++){
        if(arr[i].size() > target.size()){
            continue;
        }
        if(arr[i] == target.substr(0, arr[i].size())){
            vector<vector<string> > curr = allconstruct(target.substr(arr[i].size()));
            for(int j = 0; j < curr.size(); j++){
                curr[j].push_back(arr[i]);
                result[num].push_back(curr[j]);
            }
        }
    } 
    return result[num];
}
int main(){
    string target;
    cin >> target;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<vector<string> > k = allconstruct(target);
    for(int i = 0; i < k.size(); i++){
        for(int j = 0; j < k[i].size(); j++){
            cout << k[i][j] << ", ";
        }
        cout << "\n";
    }
}