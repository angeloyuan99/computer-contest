#include<iostream>
#include<string>
using namespace std;
int main(){
    string roman[] = {"I", "V", "X", "L", "C", "D", "M"};
    string values[] = {"1", "5", "10", "50", "100", "500", "1000"};
    string input;
    cin >> input;
    string arr[input.length()];
    for(int i = 0; i < input.length(); i++){
        arr[i] = input[i];
        for(int j = 0; j < 7; j++){
            if(arr[i] == roman[j]){
                arr[i] = values[j];
            }
        }
    }
    int total = 0;
    for(int i = 1; i < input.length() - 2; i += 2){
        string str = arr[i], str1 = arr[i + 2];
        int num = stoi(str), num1 = stoi(str1);
        if(num < num1){
            total -= (stoi(arr[i]) * stoi(arr[i - 1]));
        } else{
            total += (stoi(arr[i]) * stoi(arr[i - 1]));
        }
    }
    total += stoi(arr[input.length() - 2]) * stoi(arr[input.length() - 1]);
    cout << total << "\n";
    return 0;
}