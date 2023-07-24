#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        int world, level, movecount = 1, j = 1;
        char useless;
        cin >> world >> useless >> level;
        while(true){
            if(world == 1 && level == 2){
                world = 4;
                level = 1;
                movecount++;
            } else if(world == 4 && level == 2){
                world = 8;
                level = 1;
                movecount++;
            } else if(world == 4 && level == 2){
                world = 5;
                level = 1;
                movecount++;
            } else if(world == 8 && level == 4){
                break;
            } else if(level == 4){
                world++;
                level = 1;
                movecount++;
            } else{
                level++;
                movecount++;
            }
            //cout << "step: " << j << " world: " << world << " level: " << level << "\n";
            j++;
        }
        cout << movecount << "\n";
    }
}
//after playing level 1-2, you'll skip to level 4-1, and after level 4-2, you'll skip to level 8-1, and after 4-2 to 5-1