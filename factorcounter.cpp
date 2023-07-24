#include<iostream>
#include<string>
using namespace std;
int main(){
    for(int i = 0; i < 5; i++){
        string input, essay;
        cin >> ws;
        getline(cin, input);
        for(int i = 0; i < input.length() - 1; i++){
            if(input[i] == '/' && input[i + 1] == '/'){
                for(int j = i + 2; j < input.length(); j++){
                    essay += input[j];
                   // cout << input[j] << "\n";
                }
                //cout << essay << "\n";
                // if(essay == ""){
                //     continue;
                // }
                break;
            } else if(input[i] == '/' && input[i + 1] == '*'){
                if(input.find("*/", i + 1) == string::npos){
                    continue;
                }
                for(int j = i + 2; j < input.length(); j++){
                    if(input[j] == '*' && input[j + 1] == '/'){
                        i = (j + 2);
                        essay += " ";
                        break;
                    } else{
                        essay += input[j];
                    }
                }
            } else if(input[i] == '"'){
                if(input.find('"', i + 1) == string::npos){
                    continue;
                }
                for(int j = i + 1; j < input.length(); j++){
                    if(input[j] == '"'){
                        i = (j + 1);
                        essay += " ";
                        break;
                    } else{
                        essay += input[j];
                     //   cout << input[j] << "\n";
                    }
                }
            } else if(input[i] == '\''){
                if(input.find('\'', i + 1) == string::npos){
                    continue;
                }
                for(int j = i + 1; j < input.length(); j++){
                    if(input[j] == '\''){
                        i = (j + 1);
                        essay += " ";
                        break;
                    } else{
                        essay += input[j];
                    }
                }
            }
        }
        if(essay == ""){
            continue;
        }
        cout << essay << "\n";
    }
}