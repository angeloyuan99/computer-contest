#include<iostream>
#include<vector>
using namespace std;
vector<vector<char> > restrictionset;
int restrictions, length;
void combinations(vector <char> word, int pastset){
    if(word.size() == 0){
        for(int i = 0; i < restrictionset[0].size(); i++){
            vector<char> temp;
            temp.push_back(restrictionset[0][i]);
            cout << restrictionset[0][i] << "\n";
            combinations(temp, 0);
        }
    } else if(word.size() == length){
        return;
    } else{
        for(int i = pastset + 1; i < restrictionset.size(); i++){
            for(int j = 0; j < restrictionset[i].size(); j++){
                vector<char> temp = word;
                temp.push_back(restrictionset[i][j]);
                for(int k = 0; k < temp.size(); k++){
                    cout << temp[k];
                }
                cout << "\n";
                combinations(temp, i);
            }
        }
    }
}
int main(){
    cin >> restrictions >> length;
    for(int i = 0; i < restrictions; i++){
        int n;
        cin >> n;
        vector <char> temp;
        for(int j = 0; j < n; j++){
            char a;
            cin >> a;
            temp.push_back(a);
        }
        restrictionset.push_back(temp);
    }
    vector<char> temp;
    combinations(temp, 0);
}
// 4 3
// 1 a
// 2 e i
// 1 j
// 1 m