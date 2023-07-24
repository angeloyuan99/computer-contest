#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string name1[n];
    for(int i = 0; i < n; i++){
        cin >> name1[i];
    }
    int m;
    cin >> m;
    string name2[m];
    for(int i = 0; i < m; i++){
        cin >> name2[i];
    }
    int similarcounter = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(name1[i] == name2[j]){
                similarcounter++;
            }
        }
    }
    cout << similarcounter << "\n";
    return 0;
}