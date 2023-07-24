#include<map>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    map<string, int> order;
    int n;
    cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        order[input] = i;
    }
    cin >> n;
    vector<int> output[100000];
    for(int j = 0; j < n; j++){
        string inputs;
        cin >> inputs;
        output[order[inputs]].push_back(j + 1);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < output[i].size(); j++){
            cout << output[i][j] << "\n";
        }
    }
}