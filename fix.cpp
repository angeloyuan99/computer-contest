#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string strings[3];
            bool fix = false;
        for(int i = 0; i < 3; i++){
            cin >> strings[i];
        }
        for(int i = 0; i < 3 - 1; i++){
            for(int j = i + 1; j < 3; j++){
                if(strings[i].length() >= strings[j].length()){
                    if(strings[i].substr(0, strings[j].length()) == strings[j]){
                        fix = true;
               //         cout << i << " " << j << "\n";
                    }
                    if(strings[i].substr(strings[i].length() - strings[j].length(), strings[j].length()) == strings[j]){
                        fix = true;
                    }
                } else{
                    if(strings[j].substr(0, strings[i].length()) == strings[i]){
                        fix = true;
              //          cout << i << " " << j << "\n";
                    }
                    if(strings[j].substr(strings[j].length() - strings[i].length(), strings[i].length()) == strings[i]){
                        fix = true;
                    }
                }
            }
        }
        if(fix){
            cout << "No\n";
        } else{
            cout << "Yes\n";
        }
    }
    return 0;
}