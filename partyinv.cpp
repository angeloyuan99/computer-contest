#include<iostream>
using namespace std;
int main(){
    int k, m;
    cin >> k >> m;
    int listoffriends[k];
    for(int i = 0; i < k; i++){
        listoffriends[i] = i+1;
    }
    
    int r[m];
    for(int i = 0; i < m; i++){
    cin >> r[i];
    int counter = 0;
        for(int j = 0; j < k; j++){
            if(listoffriends[j] != 0){
                counter++;
                if (counter == r[i]){
                    listoffriends[j] = 0;
                    counter = 0;
                }
            }
            
        }
    }
    for(int i = 0; i < k; i++){
        if(listoffriends[i] != 0){
            cout << listoffriends[i] << "\n";
        }
    }
    return 0;
    
}