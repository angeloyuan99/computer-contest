#include<iostream>
using namespace std;
int main(){
    int a = 0, b = 0;
    char sequence[5] = {'A', 'B', 'C', 'D', 'E'};
    while(true){
        cin >> a >> b;
        if(a == 4){
            for(int i = 0; i < 5; i++){
                cout << sequence[i] << " ";
            }
            cout << "\n";
            break;

        } else if(a == 1){
            for(int i = 0; i < b; i++){
                char temp = sequence[0], temp1 = sequence[4];
                sequence[0] = sequence[1];
                sequence[4] = temp;
                temp1 = sequence[3];
                
            }
        } else if(a == 2){
            for(int i = 0; i < b; i++){
            }
        } else if(a == 3){
            for(int i = 0; i < b; i++){
            }
        }
    }
    return 0;

}