#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long x, y, a, b, multipule = -1, counter = 0, i = 1;
    vector<long long> used;
    cin >> x >> y >> a >> b;
    while(multipule < y){
        multipule = a * i;
        i++;
        if(multipule >= x && multipule <= y){
            counter++;
        //    cout << multipule << "\n";
            used.push_back(multipule);
        }
    }
    i = 1;
    multipule = -1;
    while(multipule < y){
        multipule = b * i;
        i++;
        if(multipule >= x && multipule <= y && find(used.begin(), used.end(), multipule) == used.end()){
            counter++;
        //    cout << multipule << "\n";
            used.push_back(multipule);
        }
    }
    cout << counter << "\n";
}