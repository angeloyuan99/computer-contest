#include<iostream>
using namespace std;
int LMS[4][4];
int main(){
    string str;
    cin >> str;
    int large = 0, medium = 0, small = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'L'){
            large++;
        } else if(str[i] == 'M'){
            medium++;
        }
        else{
            small++;
        }
    }
    small = large + medium;
    large = large - 1;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'L' && i > large){
            if(i < small){
                LMS[1][2]++;
            } else{
                LMS[1][3]++;
            }
        }
        else if(str[i] == 'M' && (i >= small || i <= large)){
            if(i <= large){
                LMS[2][1]++;
            }
            else{
                LMS[2][3]++;
            }
        }
        else if(str[i] == 'S' && i < small){
            if(i <= large){
                LMS[3][1]++;
            }
            else{
                LMS[3][2]++;
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            if(i == j){
                continue;
            }
            while(LMS[i][j] != 0 && LMS[j][i] != 0){
                LMS[i][j]--;
                LMS[j][i]--;
                ans++;
            }
        }
    }
    large = LMS[1][2] + LMS[1][3];
    ans += large * 2;
    cout << ans << "\n";
    return 0;
}