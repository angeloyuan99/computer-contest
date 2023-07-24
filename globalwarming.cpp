#include<iostream>
using namespace std;
bool patternchecker(int differences[], int n, int patternum){
    
    for(int j = 1; j < (n / patternum); j++){
    }
    return true;
}
bool repeatedSubstringPattern(string s) {
        int sz = s.size();
        for(int i = 1; i < sz ; i++){
            if(sz % i == 0){
                string current = s.substr(0, i);
                bool flag = true;
                for(int j = i ; j < sz ; j += current.size()){
                    if(current != s.substr(j, i)){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    return true;
                }
            }
        }
        return false;
}
int main(){
    int n;
    while(true){
        cin >> n;
        if(n == 0){
            return 0;
        }
        string string;
        int input[n];//, differences[n - 1];
        cin >> input[0];
        for(int i = 1; i < n; i++){
            cin >> input[i];
            string += to_string(abs(input[i] - input[i - 1]));
            cout << string << "\n";
        //    differences[i - 1] = abs(input[i] - input[i - 1]);
        }
        // for(int i = 0; i < n; i++){
        //     cout << differences[i] << " ";
        //     cout << "\n";
        // }

        for(int i = 1; i < 20; i++){
            if(repeatedSubstringPattern(string)){
                cout << i << "\n";
                break;

            }
        }
    }
}
// 7 3 4 6 4 5 7 5
// 3 1 3 5
// 3 1 4 5
// 4 3 4 6 7
// 0

// 3
// 1
// 2
// 2