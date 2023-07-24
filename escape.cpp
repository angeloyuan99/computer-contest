#include<iostream>
#include<stack>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int input[a][b];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cin >> input[i][j];
           // cout << input[i][j] << " ";
        }
       // cout << "\n";
    }
    stack <int> blah;
    blah.push(a * b);
    while(true){
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                if(input[i][j] == blah.top()){
                    blah.push((i + 1) * (j + 1));
                }
                if((i + 1) * (j + 1) == 1){
                    cout << "yes\n";
                    return 0;
                }
            }
        }
    }
}
// 3
// 4
// 3 10 8 14
// 1 11 12 12
// 6 2 3 9