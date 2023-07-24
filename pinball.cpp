#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){

    
    int n;
    int total = 0;
    cin >> n;
    vector <int> scores;
    int score;
    for(int i = 0; i < n; i++){
        cin >> score;
        auto it = upper_bound(scores.begin(), scores.end(), score); 
        total += i - distance(scores.begin(), it) + 1;
        scores.insert(it, score);
        // for(int j = 0; j < scores.size(); j++){
        //     cout << scores[j] << " ";

        // }

        // cout << "\n";
    }
    cout << fixed;
    cout << setprecision(2);
    cout << (float)total/n << "\n";
    return 0;

}