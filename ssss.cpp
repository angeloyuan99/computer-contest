#include<iostream>
#include<vector>
using namespace std;
int main(){
    //input
    int puzzle[9][9];
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> puzzle[i][j];
        }
    }

    vector<int> rows[10];
    vector<int> columns[10];
    vector<int> groups[10];
    //rows
    for(int i = 0; i < 9; i++){
        bool nine[10];
        for(int j = 0; j < 9; j++){
            nine[puzzle[i][j] - '0'] = false;
        }
        for(int j = 1; j <= 9; j++){
            if(nine[j] == true){
                rows[i].push_back(j);
            }
            
        }
    }
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < rows[i].size(); j++){
            cout << rows[i][j] << " ";
        }
        cout << "\n";
    }
    //columns


    //groups



    // for(int i = 0; i < 9; i++){
    //     for(int j = 0; j < 9; j++){
    //         cout << puzzle[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
}
// 5 0 0 6 7 0 9 0 0 
// 0 4 0 8 0 0 0 0 0
// 8 0 0 5 0 0 6 1 3
// 0 6 2 4 0 0 0 7 0
// 1 0 0 0 0 3 0 2 0
// 3 7 4 9 0 8 0 0 0 
// 0 9 6 1 0 7 8 0 2
// 2 1 8 0 0 6 0 4 5 
// 0 5 0 0 8 0 0 9 0