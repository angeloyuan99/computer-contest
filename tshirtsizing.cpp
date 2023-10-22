#include<iostream>
#include<vector>
using namespace std;
int main(){
    string input;
    cin >> input;
    int total = 0;
    vector<int> small, large;
    for(int i = 0; i < input.size(); i++){
        if(input[i] == 'L'){
            large.push_back(i + 1);
        } else if(input[i] == 'S'){
            small.push_back(i + 1);
        }
    }
    for(int i = 0; i < small.size(); i++){
        if(small[i] < (large.size() + 1)){
            total++;
        }
    }
    cout << total << "\n";
}