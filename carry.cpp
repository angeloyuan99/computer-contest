#include<iostream>
#include<string>
#include<vector>
using namespace std;
int largest = 0;
bool addable(string current, string adder){
    if(current.length() >= adder.length()){
        for(int i = 0; i < adder.length(); i++){
            if((adder[i] - '0') + (current[(current.length() - adder.length()) + i] - '0') >= 10){
                return false;
            }
        }
    } else{
        for(int i = 0; i < current.length(); i++){
            if((current[i] - '0') + (adder[(adder.length() - current.length()) + i] - '0') >= 10){
                return false;
            }
        }
    }
    return true;
}
void recursion(string current, int counter, vector<string> rest){
    if(counter > largest){
        largest = counter;
    }
    for(int i = 0; i < rest.size(); i++){
        if(addable(current, rest[i])){
            vector<string> temp = rest;
         //   cout << counter << ": " << current << " " << rest[i] << "\n";
            temp.erase(temp.begin() + i);
            recursion(to_string(stoi(current) + stoi(rest[i])), counter + 1, temp);
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<string> arr;
    for(int i = 0; i < n; i++){
        string k;
        cin >> k;
        arr.push_back(k);
    }
    recursion("0", 0, arr);
    cout << largest << "\n";
}