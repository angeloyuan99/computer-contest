#include<iostream>
using namespace std;
int r, c, num;
char arr[375][80];
void check(char direction, int x, int y, char directions[]){
        if(arr[x][y] == 'X'||x < 0 || y < 0 || x >= r || y >= c){
            return;
        }
    for(int i = 0; i < num; i++){
        if(arr[x][y] == 'X'||x < 0 || y < 0 || x >= r || y >= c){
            return;
        }
        else if(directions[i] == 'F'){
            if(direction == 'U'){
                y++;
            }else if(direction == 'D'){
                y--;
            } else if(direction == 'L'){
                x--;
            } else if(direction == 'R'){
                x++;
            }
        } else if(directions[i] == 'R'){
            if(direction == 'U'){
                direction = 'R';
            } else if(direction == 'R'){
                direction = 'D';
            } else if(direction == 'D'){
                direction = 'L';
            } else if(direction == 'L'){
                direction = 'U';
            }
        }
        else if(directions[i] == 'L'){
            if(direction == 'U'){
                direction = 'L';
            } else if(direction == 'L'){
                direction = 'D';
            } else if(direction == 'D'){
                direction = 'R';
            } else if(direction == 'R'){
                direction = 'U';
            }
        }
    }
    if(arr[x][y] == 'X'||x < 0 || y < 0 || x >= r || y >= c){
        return;
    }
    arr[x][y] = '*';
}
int main(){
    cin >> r >> c;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    cin >> num;
    char directions[num];
    for(int i = 0; i < num; i++){
        cin >> directions[i];
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            check('U', i, j, directions);
            check('R', i, j, directions);
            check('D', i, j, directions);
            check('L', i, j, directions);
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }
    return 0;
}