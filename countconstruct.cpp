#include<iostream>
#include<string>
#include<map>
using namespace std;
int arr[10000][10000];
map<string, int> a;
int countconstruct(string target, string wordbank[], int n){
    if(a.find(target) != a.end()){
        return a[target]; 
    }
    if(target == ""){
        return 1;
    }
    int totalcounter = 0;
    for(int i = 0; i < n; i++){
        if(target.find(wordbank[i]) == 0){
            int numways = countconstruct(target.substr(wordbank[i].length()), wordbank, n);
            totalcounter += numways;
        }
    }
    a[target] = totalcounter;
    return totalcounter;
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