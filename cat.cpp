#include<iostream>
using namespace std;
int main(){
    int n, catcounter = 0, dogcounter = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        if(input == "cats"){
            catcounter++;
        } else if(input == "dogs"){
            dogcounter++;
        }
    }
    if(catcounter > dogcounter){
        cout << "cats\n";
    } else if(dogcounter > catcounter){
        cout << "dogs\n";
    } else if(dogcounter == catcounter){
        cout << "equal\n";
    }
}