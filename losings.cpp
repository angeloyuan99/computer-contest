#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
using namespace std;
map<char, vector<pair<int,int> > > board;
vector<pair<int, int> > used;
bool isNeighbour(pair<int,int> a, pair<int,int> b) {
    return abs(a.first - b.first) <= 1 && abs(a.second - b.second)<=1;
}
int solve(string word, int index, vector<pair<int, int> > path) {
    if(path.size() == word.length()) return 1;
    int found = 0;
    for(pair<int,int> pos : board[word[index]]) {
        if(find(path.begin(), path.end(), pos) == path.end() && find(used.begin(), used.end(), pos) != path.end()) {
            if(path.size() == 0 || isNeighbour(pos, path.back())) {
                path.push_back(pos);
                int temp = solve(word, index + 1, path);
                found += temp;
                if(temp > 0){
                    for(int i = 0; i < path.size(); i++){
                        used.push_back(path[i]);
                    }
                } else{
                    path.pop_back();
                }
            }
        }
    }
    return found;
}

int main() {
    char chr;
    for(int i=0; i<5; i++) {
        for(int i=0; i<4; i++) {
            for(int j=0; j<4; j++) {
                cin >> chr;
                board[chr].push_back({i, j});
            }
        } 
        int total = 0, good = 0, not_found = 0, too_short = 0, repeated = 0, points = 0;

        cin >> total;

        string word;
        for (int i = 0; i < total; i++)
        {
            cin >> word;

            if(word.size() < 3) {
                too_short++;
            } else {
                vector<pair<int, int> > path;
                int result = solve(word, 0, path);
                
                if(result == 0){
                    not_found++;
                } else if(result==1){
                    good++;
                    if(word.length() == 4 || word.length() == 3){
                        points++;
                    } else if(word.size() == 5){
                        points += 2;
                    } else if(word.size() == 6){
                        points += 3;
                    } else if(word.size() == 7){
                        points += 4;
                    } else if(word.size() > 7){
                        points += 11;
                    }
                }else{
                    repeated++;
                }
            }
            used.clear();
        }

        cout << "Your score: " << points
             << " (" << good << " good, "
             << not_found << " not found, "
             << too_short << " too short, "
             << repeated << " repeated)"
             << "\n";
        board.clear();
    }
    return 0;
}