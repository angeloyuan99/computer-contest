#include<iostream>
#include<stack>
using namespace std;
int main(){
    for(int i = 0; i < 5; i++){
        string input;
        cin >> input;
        stack <char> brackets;
        bool balanced = true;
        for(int i = 0; i < input.length(); i++){
            if(brackets.empty() && (input[i] == '}' || input[i] == ']' || input[i] == ')')){
                cout << "not balanced\n";
                balanced = false;
                break;
            }
            if(input[i] == '(' || input[i] == '{' || input[i] == '['){
                brackets.push(input[i]);
            } else if(input[i] == ')'){
                if(brackets.top() == '('){
                    brackets.pop();
                } else{
                    cout << "not balanced\n";
                    balanced = false;
                    break;
                }
            } else if(input[i] == '}'){
                if(brackets.top() == '{'){
                    brackets.pop();
                } else{
                    cout << "not balanced\n";
                    balanced = false;
                    break;
                }
            } else if(input[i] == ']'){
                if(brackets.top() == '['){
                    brackets.pop();
                } else{
                    cout << "not balanced\n";
                    balanced = false;
                    break;
                }
            }
        }
        if(balanced){
            cout << "balanced\n";
        }
    }
    return 0;
}