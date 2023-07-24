#include<iostream>
using namespace std;
int main(){
    int n, k, crosser = 0, ogcrosser = 2;
    cin >> n >> k;
    for(int i = 0; i < k; i++){
        if(crosser + ogcrosser <= n){
            crosser += ogcrosser;
        } else{
            ogcrosser++;
            crosser  = ogcrosser;
        }
    }
    cout << crosser << "\n";
}