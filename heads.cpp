#include<iostream>
using namespace std;
int main(){
    int heads, legs;
    cin >> heads >> legs;
    bool done = false;
    if((legs % 2) != 0){
        cout << "No\n";
        return 0;
    } else if(legs < (heads * 2)){
        cout << "No\n";
        return 0;
    } else if(legs > (heads * 4)){
        cout << "No\n";
        return 0;
    }
    // while(done == false){
    //     if(legs - 4 )
    // }
    cout << "Yes\n";
}