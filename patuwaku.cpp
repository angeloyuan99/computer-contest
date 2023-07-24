#include <iostream>
using namespace std;
int main(){
    int arr[9];
    for(int i = 0; i < 9; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            int total = 0;
            int temp[9];
            for(int t = 0; t < 9; t++){
                temp[t] = arr[t];
            }
            temp[i] = 0;
            temp[j] = 0;
            for(int t= 0; t < 9; t++){
                total += temp[t];
            }
            if(i != j && total == 100){
                for(int t= 0; t < 9; t++){
                    if(temp[t] != 0)cout<<temp[t]<<endl;
                }
                return 0;
            }
        }
    }
    return 0;
}
