#include<iostream>
#include<cstdlib>
using namespace std;
char input[4][4], desired[4][4] = {{'A', 'B', 'C', 'D'}, {'E', 'F', 'G', 'H'}, {'I', 'J', 'K', 'L'}, {'M', 'N', 'O', ' '}};
int difference(int ii, int jj){
    int brokeni, brokenj;
  //  cout << "\n" << desired[ii][jj] << " " << input[ii][jj] << " ";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(input[i][j] == desired[ii][jj]){
                brokeni = i;
                brokenj = j;
            }
        }
    }
  //  cout << abs(brokeni - ii) + abs(brokenj - jj) << "\n" << brokeni << " " << brokenj << "   " << ii << " " << jj << "\n" << abs(brokeni - ii) << " " << abs(brokenj - jj) << "\n";
    return (abs(brokeni - ii) + abs(brokenj - jj));
}
int main(){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> input[i][j];
        }
    }
    int totaldifference = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(input[i][j] != desired[i][j] && desired[i][j] != ' '){
                totaldifference += difference(i, j);
            }
        }
    }
    // if(totaldifference == 14 || totaldifference == 21 || totaldifference == 25 || totaldifference == 4 || totaldifference == 34){
    //     for(int i = 0; i < 4; i++){
    //         for(int j = 0; j < 4; j++){
    //             cout << input[i][j] << " ";
    //         }
    //         cout << "\n";
    //     }
    // }
    cout << totaldifference << "\n";
}
// . B H G 
// A D C E 
// I F O K 
// M J N L 

// A C D . 
// N F K I 
// J O H M 
// G E L B 

// I K B J 
// D M E G 
// L F O . 
// C H A N 

// A B C M 
// E J F N 
// I K G O 
// D H L . 

// . O N M 
// L K J I 
// H G F E 
// D C B A 