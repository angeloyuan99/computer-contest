#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(50);
    auto it = lower_bound(vec.begin(), vec.end(), 40);
    vec.insert(it, 40); 
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << "\n";
    }
    return 0; 
}