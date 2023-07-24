#include<iostream>
using namespace std;
bool find(int n, string arr[], string input){
    for(int i = 0; i < n; i++){
        if(arr[i] == input){
            return true;
        }
    }
    return false;
}
int main(){
    int n, m, counter = 0;
    cin >> n >> m;
    string items[n];
    for(int i = 0; i < n; i++){
        cin >> items[i];
    }

    for(int i = 0; i < m; i++){
        int required;
        string input;
        bool condition = true;
        cin >> required;
        for(int j = 0; j < required; j++){
            cin >> input;
            if(!find(n, items, input)){
                condition = false;
            }
        }
        if(condition){
            counter++;
        }
    }
    cout << counter << "\n";
}