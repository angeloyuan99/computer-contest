#include<iostream>
#include<math.h>
using namespace std;
pair<int, int> original(int mag, int x, int y){
    if(mag == 1)return pair<int, int> (x, y); 
    int newx = x / pow(5, mag-1);
    int newy = y / pow(5, mag-1);
    return pair<int, int> (newx, newy);
}
pair<int, int> individual(int mag, int x, int y){
    if(mag == 1)return pair<int, int> (x, y);
    int temp = pow(5, mag-1);
    int newx = x % temp;
    int newy = y % temp;
    for(int i = 0; i < mag - 2; i++){
        newx /= 5;
        newy /= 5;
    }
    return pair<int, int> (newx, newy);
}
int process(int x, int y){
    if(x == 0 || x == 4 || y == 4 || y == 3 ){
        return 3;
    }
    if((y == 2 && x == 1) || (y == 2 && x == 3)){
        return 3;
    }
    if((x == 1 && y == 1) || (x == 2 && y == 2) || (x == 1 && y == 3)){
        return 2;
    }
    return 1;
}
int main(){
    int test;
    cin >> test;
    for(int t = 0; t < test; t++){
        int mag, x, y;
        cin >> mag >> x >> y;
        pair<int, int> big = original(mag, x, y);
        int first = process(big.first, big.second);
        if(first == 1){
            cout << "crystal\n";
            continue;
        }
        else if(first == 3){
            cout << "empty\n";
            continue;
        }
        else if(first == 2){
            if(mag == 1){
                cout << "empty\n";
                continue;
            }
            pair<int, int> small = individual(mag, x, y);
            int second = process(small.first, small.second);
            if(second == 1){
                cout << "crystal\n";
                continue;
            }
            else {
                cout << "empty\n";
                continue;
            }
        }
    }
    return 0; 
}
