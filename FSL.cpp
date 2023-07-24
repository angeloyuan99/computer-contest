#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool vectorfind(vector<int> vector, int target, int searchmax){
    for(int i = 0; i < searchmax; i++){
        if(vector[i] == target){
            return true;
        }
    }
    return false;
}
int main(){
    string input;
    while(input != "0"){
        cin >> input;
        vector <int> factorlist;
        int counter = 0;
        while(true){
            int total = 0;
            for(int i = 0; i < input.length(); i++){
                int num = input[i] - '0';
                int temp = 1;
                for(int j = 2; j <= num; j++){
                    temp *= j;
                }
                total += temp;
            }
            factorlist.push_back(total);
            input = to_string(total);
            int factorsize = factorlist.size() - 1;
            bool vectorcheck = vectorfind(factorlist, total, factorsize);
            if(vectorcheck == true){
                break;
            }
        }
        cout << factorlist.size() + 1 << "\nx";
    }
}