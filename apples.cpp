#include<iostream>
#include<vector>
using namespace std;
int n, counter = 0;
void recurse(int total, vector<int> path){
    if(total == n){
        cout << n << "="; 
        for(int i = 0; i < path.size() - 1; i++){
            cout << path[i] << "+";
        }
        cout << path[path.size() - 1] << "\n";
        counter++;
    }
    int kkk = 1;
    if(path.size() != 0){
        kkk = path[path.size() - 1];
    }
    for(int i = kkk; i <= min((n - total), (n - 1)); i++){
        vector<int> temp = path;
        temp.push_back(i);
        recurse(total + i, temp);
    }
}
int main(){
    cin >> n;
    vector<int> path;
    recurse(0, path);
    cout << "total=" << counter << "\n";
}