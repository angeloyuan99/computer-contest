#include<iostream>
using namespace std;
int main(){
    int bx, by, rx, ry, lx, ly;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            char l;
            cin >> l;
            if(l == 'B'){
                bx = i;
                by = j;
            }
            if(l == 'R'){
                rx = i;
                ry = j;
            }
            if(l == 'L'){
                lx = i;
                ly = j;
            }
        }
    }
    int start = abs(bx - lx) + abs(by - ly);
   // cout << bx << " " << lx << " " << rx << " " << by << " " << ly << " " << ry << " " << "\n\n";
    if((bx == rx && rx == lx && ry > ly && ry > by) || (bx == rx && rx == lx && ry < ly && ry < by) || (by == ry && ry == ly && rx > lx && rx > bx) || (by == ry && ry == ly && rx < lx && rx < bx)){
        cout << start - 1 << "\n";
        return 0;
    }
    if((bx == rx && rx == lx) || (by == ry && ry == ly)){
        cout << start + 1 << "\n";
        return 0;
    }
    cout << start - 1 << "\n";
}