#include<iostream>
using namespace std;
int main(){
    int n, life = 50, shroomcounter = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int change;
        cin >> change;
        life += change;
        if(life <= 0){
            life = 10;
            shroomcounter++;
        }
    }
    cout << shroomcounter << "\n";
}