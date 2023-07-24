#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    long long a, b;
    cin >> a >> b;
    string suffix, string;
    cin >> suffix >> string;
    vector<int> arr[26];
    for(long long i = 0; i < b; i++){
        if(suffix.find(string[i]) == string::npos){
            cout << "-1\n";
            return 0;
        }
    }
    for(int i = 0; i < suffix.length(); i++){
        arr[suffix[i] -  97].push_back(i);
    }
    //for(int i = 0; i < 26; i++){
    //     for(int j = 0; j < arr[i].size(); j++){
    //         cout << i << ": " << arr[i][j] << "\n";
    //     }
    // }
    long long count = 0, suffixpos = 0, place = 0, notfounders = 0, rest = 0;
    while(count != string.length()){
        char currletter = string[count];
        bool found = false;
        //cout << currletter << "\n";
        for(int i = 0; i < arr[currletter - 97].size(); i++){
            if(arr[currletter - 97][i] > suffixpos){
            //    cout << arr[currletter - 97][i] << "\n";
                suffixpos = arr[currletter - 97][i];
                rest = suffixpos;
       //         cout << suffixpos << "\n";
                found = true;
                count++;
                break;
            }
        }
        if(!found){
            suffixpos = 0;
            notfounders++;
        }
    }
  //  cout << notfounders << "\n";
    cout << notfounders * a + rest + 1 << "\n";
   // cout << rest << "\n";
    return 0;

}