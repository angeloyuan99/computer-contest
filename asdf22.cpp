#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int counter = 0;
int LinS = 0, LinM = 0, SinL = 0, SinM = 0, MinL = 0, MinS = 0;
void optimal(){
    if(MinL > 0 && LinM > 0){
        counter += min(MinL, LinM);
        MinL -= min(MinL, LinM);
        LinM -= min(MinL, LinM);
    }
    if(SinM > 0 && MinS > 0){
        counter += min(MinS, SinM);
        MinS -= min(MinS, SinM);
        SinM -= min(MinS, SinM);
    }
    if(SinL > 0 && LinS > 0){
        counter += min(LinS, SinL);
        LinS -= min(LinS, SinL);
        SinL -= min(LinS, SinL);
    }
}
void rest(){
    if(SinL > 0 && LinM > 0){
        counter += min(SinL, LinM);
        SinM += min(SinL, LinM);
        SinL -= min(SinL, LinM);
        LinM -= min(SinL, LinM);
    }
    if(MinL > 0 && LinS > 0){
        counter += min(MinL, LinS);
        MinS += min(MinL, LinS);
        MinL -= min(MinL, LinS);
        LinM -= min(MinL, LinS);
        cout << "AYAYA\n";
    }
    if(MinS > 0 && SinL > 0){
        counter += min(MinS, SinL);
        MinL += min(MinS, SinL);
        MinS -= min(MinS, SinL);
        SinL -= min(MinS, SinL);
    }
    if(SinM > 0 && MinL > 0){
        SinL += min(SinM, MinL);
        SinM -= min(SinM, MinL);
        MinL -= min(SinM, MinL);
        counter += min(SinM, MinL);
    }
    if(LinS > 0 && SinM > 0){
        counter += min(SinM, LinS);
        LinM += min(SinM, LinS);
        LinS -= min(SinM, LinS);
        SinM -= min(SinM, LinS);
    }
    if(LinM > 0 && MinS > 0){
        counter += min(LinM, MinS);
        LinS += min(LinM, MinS);
        LinM -= min(LinM, MinS);
        MinS -= min(LinM, MinS);
    }
}
int main(){
    string input;
    cin >> input;
    vector<int> medium, small, large;
    for(int i = 0; i < input.length(); i++){
        if(input[i] == 'L'){
            large.push_back(i + 1);
        } else if(input[i] == 'M'){
            medium.push_back(i + 1);
        } else if(input[i] == 'S'){
            small.push_back(i + 1);
        }
    }
    for(int i = 0; i < large.size(); i++){
        if(large[i] > (large.size() + medium.size())){
            LinS++;
        } else if(large[i] > large.size()){
            LinM++;
        }
    }
    for(int i = 0; i < medium.size(); i++){
        if(medium[i] < (large.size() + 1)){
            MinL++;
        } else if(medium[i] > (large.size() + medium.size())){
            MinS++;
        }
    }
    for(int i = 0; i < small.size(); i++){
        if(small[i] < (large.size() + 1)){
            SinL++;
        } else if(small[i] < (large.size() + medium.size() + 1)){
            SinM++;
        }
    }   
    cout << "LinS: " << LinS << " LinM: " << LinM << " MinS: " << MinS << " MinL: " << MinL << " SinM: " << SinM << " SinL: " << SinL << "\n";
    // while(LinS != 0 || LinM != 0 || SinL != 0 || MinL != 0 || SinM != 0 || MinS != 0){
    //     cout << "LinS: " << LinS << " LinM: " << LinM << " MinS: " << MinS << " MinL: " << MinL << " SinM: " << SinM << " SinL: " << SinL << "\n";
    //     optimal();
    //     rest();
    // }
    for(int i = 0; i < 10; i ++){
        cout << "LinS: " << LinS << " LinM: " << LinM << " MinS: " << MinS << " MinL: " << MinL << " SinM: " << SinM << " SinL: " << SinL << "\n";
        optimal();
        cout << "After optimal: \nLinS: " << LinS << " LinM: " << LinM << " MinS: " << MinS << " MinL: " << MinL << " SinM: " << SinM << " SinL: " << SinL << "\n";
        rest();
        cout << "After Rest: \nLinS: " << LinS << " LinM: " << LinM << " MinS: " << MinS << " MinL: " << MinL << " SinM: " << SinM << " SinL: " << SinL << "\n";
    }
    cout << counter << "\n";
}