#include<iostream>
#include<map>
using namespace std;
int main(){
    long long movies, weeks;
    cin >> movies >> weeks;
    map<string, long long> movie;
    map<string, bool> hola;
    string name[movies];
    long long enjoyment[movies];
    for(long long i = 0; i < movies; i++){
        cin >> name[i];
    }
    for(long long i = 0; i < movies; i++){
        cin >> enjoyment[i];
    }
    for(long long i = 0; i < movies; i++){
        movie[name[i]] = enjoyment[i];
        hola[name[i]] = false;
    }
    long long counter = 0;
    for(long long i = 0; i < weeks; i++){
        string input;
        cin >> input;
        if(hola[input] == false){
            counter += movie[input];
            hola[input] = true;
        }
    }
    cout << counter << "\n";
}