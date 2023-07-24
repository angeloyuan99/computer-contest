#include<iostream>
using namespace std;
int main(){
    long long lower = 0, higher = 2000000000;
    while(lower < higher){
        long long ag = lower + (higher - lower);
        cout << ag / 2;
        cout.flush();
        string check;
        cin >> ws;
        getline(cin, check);
        if(check == "SINKS"){
            lower = ag;
        } else if(check == "FLOATS"){
            higher = ag;
        } else if(check == "OK"){
            break;
        }
    }
    return 0;
    
}