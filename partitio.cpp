#include<iostream>
#include<vector>
using namespace std;
int n, counter = 0;
void recur(int total, vector<int> pattern, int remaining){
    if(pattern.size() != 0){
        counter++;
    }
    if(remaining == 0){
        counter++;
    }
    for(int i = 1; i <= remaining / 2; i++){
        vector<int> temp = pattern;
        temp.push_back(i);
        recur(i * 2, temp, remaining - (i * 2));
    }
}
int main(){
    cin >> n;
    vector<int> blank;
    recur(0, blank, n);
    cout << counter + 1 << "\n";
}