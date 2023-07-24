#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int participants, nextround;
    cin >> participants >> nextround;
    map<int, int> tournament;
    int temp[participants];
    for(int i = 0; i < participants; i++){
        int first, second;
        cin >> first >> second;
        temp[i] = second;
        tournament.insert(pair<int, int>(first, second));
    }
    map<int, int>::reverse_iterator rit = tournament.rbegin();
    int secondround[nextround];
    for(int i = 0; i < nextround; i++){
        secondround[i] = rit->second;
        rit++;
    }
    sort(secondround, secondround+nextround);
    int score = secondround[nextround-1];
    for(int i = 0; i < participants; i++){
        if(temp[i] == score)cout<<i+1<<"\n";
    }
    return 0;
}