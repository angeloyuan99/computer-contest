#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n;
    cin >> n;
    int difference;
    int k;
    int pastnum;
    for(int i = 0; i < n; i++){
        cin >> k;
        if(i == 1){
            difference = abs(k - pastnum);
        } else if(i > 1){
            if(abs(k - pastnum) == difference - 1){
                difference = abs(k - pastnum);
            } else{
                cout << "Not jolly\n";
                return 0;
            }
        }
        pastnum = k;
        
    }
    cout << "Jolly\n";
}