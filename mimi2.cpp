#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool comparator(pair<int, string> pair1, pair<int, string> pair2){
    return(pair1.first < pair2.first);
}
int main(){
    int numberofveterans;
    cin >> numberofveterans;
    vector <pair<int, string> > veterans(numberofveterans);
    for(int i = 0; i < numberofveterans; i++){
        cin >> veterans[i].second >> veterans[i].first;
    }
    stable_sort(veterans.begin(), veterans.end(), comparator);
    // for(int i = 0; i < numberofveterans; i++){
    //     cout << veterans[i].first << " " << veterans[i].second << "\n";
    // }
    int hires;
    cin >> hires;
    for(int i = 0; i < hires; i++){
        int skills, difference;
        cin >> skills >> difference;
        pair<int, string> Pair1;
        Pair1.first = skills; 
        Pair1.second = "";
        vector <pair<int, string> >::iterator lowerbound = lower_bound(veterans.begin(), veterans.end(), Pair1);
    //    cout << lowerbound - veterans.begin() << "\n";
        if(veterans[lowerbound - veterans.begin()].first > skills + difference || veterans[lowerbound - veterans.begin()].first < skills){
            cout << "No suitable teacher!\n";
        } else{
            cout << veterans[lowerbound - veterans.begin()].second << "\n";
        }
    }
}
// 4
// Muse 203
// Sylphy 202
// Koboli 202
// Salama 999
// 2
// 200 1
// 200 3