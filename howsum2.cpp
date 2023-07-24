#include<iostream>
#include<vector>
using namespace std;
int targetsum;
vector<int> howsum(int targetsum, int numbers[], int n){
    vector<int> table[targetsum + 1];
    table[0].push_back(0);
    for(int i = 0; i <= targetsum; i++){
        if(table[i].size() != 0){
            if(i == 0){
                table[0].pop_back();
            }
            for(int j = 0; j < n; j++){
                if(i + numbers[j] > targetsum){
                    continue;
                }
                table[i + numbers[j]] = table[i];
                table[i + numbers[j]].push_back(numbers[j]);
                // for(int z = 0; z < table[i + numbers[j]].size(); z++){
                //     cout << table[i + numbers[j]][z] << " ";
                // }
                // cout << "\n";
            }
        }
    }
    return table[targetsum];
}
int main(){
    int n;
    cin >> targetsum >> n;
    int numbers[n];
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }
    vector<int> result = howsum(targetsum, numbers, n);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << "\n";
}