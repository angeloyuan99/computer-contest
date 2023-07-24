#include<iostream>
#include<stack>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    string input;
    getline(cin, input);
  //  cout << input << "\n";
    stack <double> equation;
    int startingindex = 0;
    for(int i = 0; i < input.length(); i++){
        if(input[i] == ' '){
            equation.push(stod(input.substr(startingindex, i - startingindex)));
            startingindex = i + 1;
        }
        if(input[i] == '+'){
            double operand1 = equation.top();
            equation.pop();
            double operand2 = equation.top();
            equation.pop();
            equation.push(operand1 + operand2);
            startingindex = i + 2;
            i += 1;
            continue;
        } else if(input[i] == '-'){
            double operand1 = equation.top();
            equation.pop();
            double operand2 = equation.top();
            equation.pop();
            equation.push(operand2 - operand1);
            startingindex = i + 2;
            i += 1;
            continue;
        } else if(input[i] == '*'){
            double operand1 = equation.top();
            equation.pop();
            double operand2 = equation.top();
            equation.pop();
            equation.push(operand2 * operand1);
            startingindex = i + 2;
            i += 1;
            continue;
        } else if(input[i] == '/'){
            double operand1 = equation.top();
            equation.pop();
            double operand2 = equation.top();
            equation.pop();
            equation.push(operand2 / operand1);
            startingindex = i + 2;
            i += 1;
            continue;
        } else if(input[i] == '%'){
            double operand1 = equation.top();
            equation.pop();
            double operand2 = equation.top();
            equation.pop();
            equation.push((int)operand2 % (int)operand1);
            startingindex = i + 2;
            i += 1;
        } else if(input[i] == '^'){
            double operand1 = equation.top();
            equation.pop();
            double operand2 = equation.top();
            equation.pop();
            equation.push(pow(operand2, operand1));
            startingindex = i + 2;
            i += 1;
        }
    }
    cout << fixed;
    cout << setprecision(1);
    cout << equation.top() << "\n";
}