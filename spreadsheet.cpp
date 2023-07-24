#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int check;
bool sortcol( const vector<int>& v1, const vector<int>& v2 ) { 
    return v1[check - 1] < v2[check - 1]; 
} 
int main(){
    vector <vector <int> > spreadsheet;
    int columns, rows;
    cin >> rows >> columns; 
    int val;
    for(int i = 0; i < rows; i++){
        vector<int> temp;
        for(int j = 0; j < columns; j++){
            cin >> val;
            temp.push_back(val);
        }
        spreadsheet.push_back(temp);
        temp.clear();
    }
    int clicks;
    cin >> clicks;
    for(int i = 0; i < clicks; i++){
        cin >> check;
        stable_sort(spreadsheet.begin(), spreadsheet.end(),sortcol);
        // for(int i = 0; i < rows; i++){
        //     for(int j = 0; j < columns; j++){
        //         cout << spreadsheet[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        // cout << "\n";
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << spreadsheet[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;

}