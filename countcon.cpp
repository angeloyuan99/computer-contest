#include<iostream>
#include<string>
using namespace std;
int countconstruct(string target, string wordbank[], int n){
    int table[target.length() + 1];
    for(int i = 0; i <= target.length(); i++){
        table[i] = 0;
    }
    table[0] = 1;
    for(int i = 0; i <= target.length(); i++){
        for(int j = 0; j < n; j++){
            if(target.substr(i, i + wordbank[j].length()) == wordbank[j]){
                table[i + wordbank[j].length()] += table[i];
            }
        } 
    }
    return table[target.length()];
}
int main(){
    string target;
    cin >> target;
    int n;
    cin >> n;
    string wordbank[n];
    for(int i = 0; i < n; i++){
        cin >> wordbank[i];
    }
    cout << countconstruct(target, wordbank, n) << "\n";
}