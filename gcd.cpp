#include<iostream>
#include<vector>
using namespace std;
struct game_result{
    int team_1;
    int team_2;
    int score_1;
    int score_2;
};
bool isWinner(int scores[], int team){
    for(int i = 1; i < 4+1; i++){
        if(i == team)continue;
        if(scores[i] >= scores[team])return false;
    }
    return true;
}
bool exist(const vector<game_result>& games, int team_1, int team_2){
    for(auto g : games){
        if(g.team_1 == team_1 && g.team_2 == team_2){
            return true;
        }
    }
    return false;
}
void ddd(vector<game_result>& games, int nth, vector<vector<game_result> >& result){
    if(nth >= (int)games.size()){
        result.push_back(games);
        return;
    }
    int next = nth+1;
    games[nth].score_1 = 3; games[nth].score_2 = 0;
    ddd(games, next, result);
    games[nth].score_1 = 0; games[nth].score_2 = 3;
    ddd(games, next, result);
    games[nth].score_1 = 1; games[nth].score_2 = 1;
    ddd(games, next, result);
}
vector<vector<game_result> > generate_all_results(vector<game_result> games){
    vector<vector<game_result> > result;
    ddd(games, 0, result);
    return result;
}
int main(){
    int T;
    cin >> T;
    int G;
    cin >> G;
    vector<game_result> played_game;
    while(G--){
        game_result game;
        cin >> game.team_1 >> game.team_2 >> game.score_1 >> game.score_2;
        if(game.score_1 == game.score_2){
            game.score_1 = 1;
            game.score_2 = 1;
        }
        else if(game.score_1 > game.score_2){
            game.score_1 = 3;
            game.score_2 = 0;
        }
        else if(game.score_1 < game.score_2){
            game.score_1 = 0;
            game.score_2 = 3;
        }
        played_game.push_back(game);
    }
    int score[5];
    for(int i = 0; i < 5; i++){
        score[i] = 0;
    }
    for(auto g : played_game){
        score[g.team_1] += g.score_1;
        score[g.team_2] += g.score_2;
    }
    vector<game_result> unplayed_games;
    for(int i = 1; i < 4; i++){
        for(int j = i+1; j <= 4; j++){
            if(!exist(played_game, i, j)){
                unplayed_games.push_back({i, j, 0, 0});
            }
        }
    }
    vector<vector<game_result> > unplayed_game_results = generate_all_results(unplayed_games);
    int favwins = 0;
    for(auto results : unplayed_game_results){
        int new_score[4+1];
        copy(score, score + 4 + 1, new_score);
        for(auto result : results){
            new_score[result.team_1]    += result.score_1;
            new_score[result.team_2] += result.score_2;
        }
        if(isWinner(new_score, T)) favwins++;
    }
    cout << favwins << "\n";
    return 0;
}