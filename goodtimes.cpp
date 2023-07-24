#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    string n;
    cin >> n;
    cout << n << " in Ottawa\n";
    if(stoi(n) < 300){

    } else{
        cout << stoi(n) - 300 << " in Victoria\n";
    }
    if(stoi(n) < 200){

    } else{
        cout << stoi(n) - 200 << " in Edmonton\n";
    }
    if(stoi(n) < 100){
        
    } else{
        cout << stoi(n) - 100 << " in Winnipeg\n";
    }
    cout << n << " in Toronto\n";
    return 0;
    if(stoi(n) > 2300){

    }
}