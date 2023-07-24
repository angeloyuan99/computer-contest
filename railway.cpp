#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i < 10; i++){
        int n;
        cin >> n;
        int input[n];
        for(int j = 0; j < n; j++){
            cin >> input[j];
        }
        int numfind = n, counter = 0;
        while(numfind != 1){
            for(int j = n - 1; j >= 0; j--){
                if(input[j] == numfind - 1){   
                    int inttemp = input[0], inttemp1;
                    counter += j;
                    for(int k = 1; k < j; k++){
                        inttemp1 = input[k];
                        input[k] = inttemp;
                        inttemp = inttemp1;
                    }
                    numfind--;
                    input[0] = numfind;
                    cout << numfind - 1 << " " << j << "\n";
                    for(int k = 0; k < n; k++){
                        cout << input[k] << " ";
                    }
                    cout << "\n\n";
                    break;
                }
                if(input[j] == numfind){
                    numfind--;
                    cout << numfind << "\nin front\n\n";
                    break;
                }
            }
        }
        cout << counter << "\n";
    }
}