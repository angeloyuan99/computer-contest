#include<iostream>
using namespace std;
int main(){
    string input;
    cin >> input;
    if(input == "dublo7"){
        int ammocounterbot = 0, ammocounterop = 0, i = 0;
        while(input != "ISUCKANDURBETTERIQUIT"){
            cin >> input;
            if(i == 0){
                cout << "Reload\n";
                ammocounterbot++;
                i++;
                continue;
            }
            if(input == "Reload" && i != 0 && ammocounterbot > 0){
                ammocounterop++;
                cout << "\nShoot\n";
            } else if(input == "Reload" && i != 0 && ammocounterbot == 0){
                ammocounterbot++;
                ammocounterop++;
                cout << "\nReload\n";
            } else if(input == "Reload" && i != 0 && ammocounterbot >= 3 && ammocounterop < 3){
                ammocounterop++;
                cout << "\nFireball\n";
            } else if(input == "Shoot" && i != 0){
                cout << "\nShield\n";
                ammocounterop--;
            } else if(input == "Shoot" && i != 0 && ammocounterbot >= 3 && ammocounterop < 3){
                cout << "\nFireball\n";
            } else if(input == "Shield"){
                cout << "\nReload\n";
                ammocounterbot++;
            }
        }
    } else if(input == "RPS"){
        while(input != "ISUCKANDURBETTERIQUIT"){
            cin >> input;
            if(input == "Rock"){
                cout << "\nScissors\n";
            } else if(input == "Paper"){
                cout << "\nRock\n";
            } else if(input == "Scissors"){
                cout << "\nPaper\n";
            }
        }
    }
}