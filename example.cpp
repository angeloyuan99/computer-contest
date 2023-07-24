#include<iostream>
#include<vector>
using namespace std;
int N, counter = 0;
void process(vector<int> path, int total){
    if(total == N){
        cout << N<< "=";
        for(int i = 0; i < path.size() - 1; i++){
            cout<<path[i]<<"+";
        }
        cout<<path[path.size() - 1]<<"\n";
        counter++;
    }
    // if(total > N){
    //     cout<<total<<"\n";
    //     return 0;
    // }
    // cout<<total<<"\n";
    int head = 1;
    if(path.size() != 0){
        head = path[path.size() - 1];
    }
    for(int i = head; i <= min(N - 1, (N - total)); i++){
        vector<int> temp = path;
        temp.push_back(i);
        process(temp, total + i);
      //  counter += process(temp, total + i);
    }
  //  return counter;
    }
int main(){
    cin >> N;
    vector<int> path;
    process(path, 0);
    cout << "total=" << counter << "\n";
    return 0;
}