#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char lastcommand;
    int rarray[101], sarray[101];
    for(int i = 0; i < 101; i++){
        rarray[i] = -1;
        sarray[i] = -1;
    }
    for(int i = 0; i < n; i++){
        char command;
        int n;
        cin >> command >> n;
        if(command == 'W'){
            for(int i = 0; i < 101; i++){
                if(rarray[i] != -1){
                    rarray[i] += n;
                }
            }
        }else if(lastcommand != 'W'){
            for(int i = 0; i < 101; i++){
                if(rarray[i] != -1){
                    rarray[i]++;
                }
            }
        }
        if(command == 'R'){
            rarray[n] = 0;
        } 
        if(command == 'S'){
            if(sarray[n] == -1){
                sarray[n] = 0;
            }
            sarray[n] += rarray[n];
            rarray[n] = -1;
        }
        lastcommand = command;
        // for(int i = 0; i < 101; i++){
        //     if(sarray[i] != -1 || rarray[i] != -1){
        //         cout << i << " " << rarray[i] << " " << sarray[i] << "\n";
        //     }
        // }
    }
    for(int i = 0; i < 101; i++){
        if(sarray[i] != -1 || rarray[i] != -1){
            cout << i << " " << sarray[i] << "\n";
        }
    }
}