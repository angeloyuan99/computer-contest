#include<iostream>
using namespace std;
bool canconstruct(string target, string wordbank[], int n){
    bool table[target.length() + 1];
    for(int i = 0; i < target.length() + 1; i++){
        table[i] = false;
    }
    table[0] = true;
    for(int i = 0; i <= target.length(); i++){
        if(table[i] == true){
            for(int j = 0; j < n; j++){
                if(target.substr(i, i + wordbank[j].length()) == wordbank[j]){
                    table[i + wordbank[j].length()] = true;
                }
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
    cout << canconstruct(target, wordbank, n) << "\n";
}