#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int fi, fo, n, x, ud, ol, el, count;    
        cin >> fi;
        x = fi;
        ud = x;
        ol = 0;
        el = 0;
        count = 0;
        cout << "Round " << count << ": " << ud << " undefeated, " << ol << " one-loss, " << el << " eliminated\n";
        while(ud != 0 || ol != 1){
            if(ud == 1 && ol == 1){
                ol = 2;
                ud = 0;
            } else{
                el = (el + ol / 2);
                ol = (ol - (ol / 2) + (ud / 2));
                ud = (ud - (ud / 2));
            }
            count += 1;
            cout << "Round " << count << ": " << ud << " undefeated, " << ol << " one-loss, " << el << " eliminated\n";
        }
        cout << "There are " << count << " rounds.\n";
    }
}