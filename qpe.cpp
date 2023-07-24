#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main(){
    int questions, professors, emails;
    cin >> questions >> professors >> emails;
    vector< pair<int, int> > ratings[questions];
    for(int i = 0; i < emails; i++){
        int professor, question, quality;
        cin >> professor >> question >> quality;
        ratings[question - 1].push_back(make_pair(professor, quality));
    }
    for(int i = 0; i < questions; i++){
        int largest = -1, prof = -1;
        for(int j = 0; j < ratings[i].size(); j++){
            if(ratings[i][j].second > largest){
                largest = ratings[i][j].second;
                prof = ratings[i][j].first;
            }
        }
        cout << prof << " ";
    }
    cout << "\n";
}