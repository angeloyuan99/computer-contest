#include<iostream>
#include<vector>
using namespace std;
int N, total = 0;
int process(vector<int> path, int total){
    if(total == N){
        cout << N<< "=";
        for(int i = 0; i < path.size() - 1; i++){
            cout<<path[i]<<"+";
        }
        cout<<path[path.size() - 1]<<"\n";
        return 1;
    }
    if(total > N){
        cout<<total<<"\n";
        return 0;
    }
    // cout<<total<<"\n";
    int head = 1, counter = 0;
    if(path.size() != 0){
        head = path[path.size() - 1];
    }
    for(int i = head; i <= min(N - 1, (N - total)); i++){
        vector<int> temp = path;
        temp.push_back(i);
        counter += process(temp, total + i);
    }
    return counter;
    }
int main(){
    cin >> N;
    vector<int> path;
    // path.push_back(1);
    int temp = process(path, 0);
    cout << "total=" << temp << "\n";
    return 0;
}
