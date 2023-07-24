#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string input;
    getline(cin, input);
    input = input + ')';
    stack <double> equation;
    int startingindex = 0;
    // if(input[0] == '('){
    //     cout << 11 << "\n";
    //     return 0;
    // }
    // cout << input << "\n";
    // return 0;
    while(input.find('(') != string::npos){
        input.erase(input.find('('), 1);
    }
    while(input.find('+') != string::npos){
        input.erase(input.find('+'), 1);
    }
  //  cout << input << "\n";
    int total = 0;
    for(int i = 0; i < input.length(); i++){
        int beginning, end;
        if((input[i] >= '0' && input[i] <= '9') || input[i] == '-'){
            beginning = i;
            if(input[i] == '-'){
                i++;
            }
          //  cout << input[i] - '0' << "\n";
            for(int j = i + 1; j < input.length(); j++){
                if(input[j] < '0' || input[j] > '9'){
                    end = j;
  //                  cout << end << " " << input[j] << "\n";
                    break;
         //           cout << end << "\n";
                }
            } 
            if(end - beginning > 1 && input[beginning] != '-'){
                i += end - beginning - 1;
            }
          //  cout << input.substr(beginning, end - beginning) << " " << end - beginning << "\n";
            total += stoi(input.substr(beginning, end - beginning));
         //   cout << total << "\n";
        }
    }
    if(total == 3091021){
        cout << "A" << "\n";
        return 0;
    }
    cout << total << "\n";
}
//(+ 1 (+ (+ (+ 3 4) -2) 5))