#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string names[] = {"Mind", "Power", "Reality", "Soul", "Space", "Time"};
    bool dubs = true;
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        for(int j = 0; j < 6; j++){
            if(input == names[j]){
                names[j] = " ";
            }
            if(names[j][3] == 'f'){
                cout << "F in chat";
            } else{
                dubs = false;
            }
        }
    }
    for(int i = 0; i < 6; i++){
        if(names[i] != " "){
            cout << names[i] << "\n";
        }
    }
    if(dubs == false){
        cout << "Thanos cannot win";
    }
}