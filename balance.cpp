#include<iostream>
using namespace std;
bool balance(string input){
    int checker = 0;
    bool used=false;
    for(int i = 0; i < input.length(); i++){
        if(input[i] == '('){
            checker++;
        } else if(input[i] == ')'){
            checker--;
            if(checker == -1 && used == false){
                checker = 1;
                used = true;
            } else if(checker == -1 && used == true){
                return false;
            }
        }
    }
    if(checker == 0 || (checker == 2 && !used)){
        return true;
    }
    return false;
}
int main(){
    // cin.sync_with_stdio(0);
    // cin.tie(0);
    // cout.sync_with_stdio(0);
    // cout.tie(0);
    string input;
    cin >> input;
    //cout << input << "\n";
    if(balance(input)){
        cout << "YES" << "\n";

    } else{
        cout << "NO\n";
    }
   return 0;
}
////()(()(()))()()()((()()))(((())(((()((((((())())((())((()))())
