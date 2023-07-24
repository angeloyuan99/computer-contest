#include <iostream>
using namespace std;
int main(){
    int current;
    string holder;
    int tcount = 0, scount = 0;
    cin >> current;
    while(holder.compare("EOF") != 0){
        cin >> holder;
        if(holder.compare("TAKE") == 0){
            tcount++;
        }else if(holder.compare("SERVE") == 0){
            scount++;
        }else if(holder.compare("CLOSE") == 0){
            current = (tcount + current) % 999;
            cout << tcount << " " << tcount - scount << " " << current << "\n";
            tcount = 0;
            scount = 0;
        }
    }
    return 0;
}