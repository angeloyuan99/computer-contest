#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    int vertical, horizontal;
    cin >> vertical >> horizontal;
    set<vector<int> > used, used1;
    vector<int> temp(horizontal);
    for(int i = 0; i < horizontal; i++){
        cin >> temp[i];
    }
    used.insert(temp);
    for(int i = 1; i < vertical; i++){
        for(int j = 0; j < horizontal; j++){
            cin >> temp[j];
        }
        used1.insert(temp);
        for(vector<int> j : used){
            vector<int> pushback;
            for(int k = 0; k < horizontal; k++){
                if(j[k] == temp[k]){
                    pushback.push_back(0);
                } else{
                    pushback.push_back(1);
                }
            }
            for(int l = 0; l < horizontal; l++){
            //    cout << pushback[l];
            }
            used1.insert(pushback);
        }
        used = used1;
        used1.clear();
    }
    cout << used.size() << "\n";
}