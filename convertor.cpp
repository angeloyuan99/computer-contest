#include<iostream>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    if(a.length() - b.length() > 1){
        cout << "No\n";
        return 0;

    } else if(a == b){
        cout << "Yes\n";
        return 0;

    }
    bool removed = false;
    for(int i = 0, j = 0; i < a.length(); i++, j++){
        if(a[i] != b[j] && removed == false){
            removed = true;
            i++;
        } else if(a[i] != b[j] && removed == true){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}