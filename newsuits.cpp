#include<iostream>
using namespace std;
int main(){
    int n, temp = 0;
    cin >> n;
    int intArr1[n], countArr[n];
    for(int i = 0; i < n; i++){
        cin >> intArr1[i];
        countArr[i] = 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(intArr1[i] == intArr1[j]){
                countArr[i]++;
            }
            //cout << intArr1[i] << " " << intArr1[j] << " " << countArr[i] << "\n";
        }
    }
    for(int i = 0; i < n; i++){
        //cout << countArr[i] << "\n";
    }
    int max = 1;
    for(int i = 0; i < n; i++){
        //cout << countArr[i] << " " << max << "\n";
        if(countArr[i] > max){
            max = countArr[i];
            temp = i;
        }
       //cout << countArr[i] << "\n";
    }
    int modecount = 0;
    //cout << max << "\n" << intArr1[temp] << "\n";
    for(int i = 0; i < n; i++){
        if(max == countArr[i]){
            modecount++;
            //cout << intArr1[i] << "\n";
        }
    }
    cout << modecount << "\n";
    for(int i = 0; i < n; i++){
        if(max == countArr[i]){
            cout << i ntArr1[i] << "\n";
        }
    }
    return 0;
}