#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
string conversion(string str){
    stack <string> stack;
    for(int i = str.length(); i > -1; i--){
        if(str[i] == '-' || str[i] == '+' || str[i] == '*'|| str[i] == '/'|| str[i] == '%'){
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
    for(int i = 0; i < 5; i++){
        cin >> ws;
        getline(cin, input);
        input.erase(remove(input.begin(), input.end(), ' '), input.end());
        if(input[0] == '*' || input[0] == '/' || input[0] == '+' || input[0] == '%' || input[0] == '-'){ 
            input = conversion(input);
        }
 //       cout << input << "\n";
        stack <string> stack;
        for(int i = 0; i < input.length(); i++){
            if(input[i] == '*'){ 
                string operand1 = stack.top(); stack.pop();
                string operand2 = stack.top(); stack.pop();
                stack.push(to_string(stoi(operand2) * stoi(operand1)));
               // cout << stack.top() << "\n";
            }else if(input[i] == '-'){ 
                string operand1 = stack.top(); stack.pop();
                string operand2 = stack.top(); stack.pop();
                stack.push(to_string(stoi(operand2) - stoi(operand1)));
        //        cout << stack.top() << "\n";
            }else if(input[i] == '+'){ 
                string operand1 = stack.top(); stack.pop();
                string operand2 = stack.top(); stack.pop();
                stack.push(to_string(stoi(operand2) + stoi(operand1)));
        //        cout << stack.top() << "\n";
            }else if(input[i] == '/'){ 
                string operand1 = stack.top(); stack.pop();
                string operand2 = stack.top(); stack.pop();
                stack.push(to_string(stoi(operand2) / stoi(operand1)));
             //   cout << stack.top() << "\n";
            }else if(input[i] == '%'){ 
                string operand1 = stack.top(); stack.pop();
                string operand2 = stack.top(); stack.pop();
                stack.push(to_string(stoi(operand2) % stoi(operand1)));
               // cout << stack.top() << "\n";
            } else{
            string str;
            stack.push(str + input[i]);
            }
        }
        cout << stack.top() << "\n";
    }
}
// * 7 2
// 5 3 +
// * / 5 2 + 2 3
// 8 4 /
// % 9 5