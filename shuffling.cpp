#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> songs;
    songs.push_back('A');
    songs.push_back('B');
    songs.push_back('C');
    songs.push_back('D');
    songs.push_back('E');
    int input = -1, n = -1;
    while(input != 4){
        cin >> input >> n;
        if(input == 1){
            for(int i = 0; i < n; i++){
                char temp4 = songs[4], temp3 = songs[3], temp2 = songs[2], temp1 = songs[1];
                songs[4] = songs[0];
                songs[3] = temp4;
                songs[2] = temp3;
                songs[1] = temp2;
                songs[0] = temp1;

            }
        } else if(input == 2){
            for(int i = 0; i < n; i++){
                char temp4 = songs[4], temp3 = songs[3], temp2 = songs[2], temp1 = songs[1], temp0 = songs[0];
                songs[0] = songs[4];
                songs[4] = temp3;
                songs[3] = temp2;
                songs[2] = temp1;
                songs[1] = temp0;
            }
        } else if(input == 3){
            for(int i = 0; i < n; i++){
                char temp1 = songs[1];
                songs[1] = songs[0];
                songs[0] = temp1;
            }
        }
    }
    for(int i = 0; i < songs.size(); i++){
        cout << songs[i] << " ";
    }
}