#include<iostream>
#include<map>
using namespace std;
int main(){
    string input;
    cin >> input;
    map<char, int> counters;
    for(int loopnumberforinput = 0; loopnumberforinput < input.size(); loopnumberforinput++){
        counters[input[loopnumberforinput]]++;
    }
    map<char, int>::iterator endit = counters.end();
    endit--;
    for(map<char, int>::iterator it = counters.begin(); it != endit; it++){
        if((it->second % 2) == 0){
            continue;
        } else{
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}