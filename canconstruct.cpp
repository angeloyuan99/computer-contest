#include<iostream>
#include<string>
#include<map>
using namespace std;
map<string, bool> a;
bool canconstruct(string target, string wordbank[], int n){
    if(a.find(target) != a.end()){
        return a[target]; 
    }
    if(target == ""){
        return true;
    }
    for(int i = 0; i < n; i++){
        if(target.find(wordbank[i]) == 0){
            string suffix = target.substr(wordbank[i].length());
            if(canconstruct(suffix, wordbank, n) == true){
                a[target] = true;
                return true;
            }
        }
    }
    a[target] = false;
    return false;
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