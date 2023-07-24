#include<iostream>
using namespace std;
int lastVisited = 0;
int highest(int y[], int size, int target){
    for(; lastVisited < size; lastVisited++){
     //   cout << lastVisited << " " << y[lastVisited] << " " << target << "\n";
        if(y[lastVisited] < target) return -1;
        
        if(y[lastVisited] >= target && (lastVisited >= size - 1 || y[lastVisited+1] < target ) ){
            return lastVisited;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        int x[a], y[a];
        for(int j = 0; j < a; j++){
            cin >> x[j];
        }
        for(int j = 0; j < a; j++){
            cin >> y[j];
        }
        int maxdist = 0;
        int num = 0;
        for(int i = 0; i < a; i++){
            int high = highest(y, a, x[i]);
           // cout << high << "\n";
            if(high == -1){
                continue;
            }
            if(high - i > maxdist){
                maxdist = high - i;
            }
        }
        cout << "The maximum distance is " << maxdist << "\n";
    }
    return 0;
}