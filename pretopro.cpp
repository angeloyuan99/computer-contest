#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
string conversion(string str){
    stack <string> stack;
    for(int i = str.length(); i > -1; i--){
        if(str[i] == '-' || str[i] == '+'){
            string str1 = stack.top();
            stack.pop();
            string str2 = stack.top();
            stack.pop();
            stack.push(str1 + str2 + str[i]);
        } else{
            stack.push(string(1, str[i]));
        }
    }
    return stack.top();
}
int main(){
    string input;
    while(input != "0"){
        cin >> ws;
        getline(cin, input);
        if(input == "0"){
            return 0;
        }
        input.erase(remove(input.begin(), input.end(), ' '), input.end()); 
        input = conversion(input);
        cout << input << "\n";
        // for(int i = 0; i < input.length(); i++){
        //     cout << input[i] << " ";
        // }
        // cout << '\n';
    }
}
// 1
// + 1 2
// - 2 2
// + 2 - 2 11
// - - 3 + 2 1 9
// 0
