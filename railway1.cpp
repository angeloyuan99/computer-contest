#include<iostream>
#include<vector>
using namespace std;
int main(){
    for(int i = 0; i < 10; i++){
        int n;
        cin >> n;
        vector <int> input;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            input.push_back(x);
        }
        int counter = 0, indexOfN, indexOfNminus1, NumFind = n - 1;
        while(NumFind != 0){
            for(int j = 0; j < n; j++){
                if(input[j] == NumFind){
                    indexOfNminus1 = j;
                } else if(input[j] == NumFind + 1){
                    indexOfN = j;
                }
            }
            if(indexOfNminus1 > indexOfN){
                counter += indexOfNminus1;
                input.erase(input.begin() + indexOfNminus1);
                input.insert(input.begin(), NumFind);
            }
            NumFind--;
        }
        cout << counter << "\n";
    }
}