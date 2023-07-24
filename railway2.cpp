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
            for(int j = n - 1; j >= 0; j++){
                if(input[j] == NumFind){
                    input.erase(input.begin() + j);
                    input.insert(input.begin(), NumFind);
                    counter += j;
                    break;
                } else if(input[j] == NumFind + 1){
                    break;
                }
            }
            NumFind--;
        }
        cout << counter << "\n";
    }
}