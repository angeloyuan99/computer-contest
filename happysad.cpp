#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int main(){
    string input;
    getline(cin, input);
    int happy = input.find(":-)"), sad = input.find(":-("), happycounter = 0, sadcounter = 0;

    while(happy != string::npos){
        happy = input.find(":-)", happy + 3);
        happycounter++;
    }

    while(sad != string::npos){
        sad = input.find(":-(", sad + 3);
        sadcounter++;
    }

    if(happycounter == 0 && sadcounter == 0){
        cout << "none" << "\n";
    } else if(happycounter > sadcounter){
        cout << "happy" << "\n";
    } else if(happycounter < sadcounter){
        cout << "sad" << "\n";
    } else{
        cout << "unsure" << "\n";
    }
    return 0;

}
