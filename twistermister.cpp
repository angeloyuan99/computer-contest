#include<iostream>
using namespace std;
int x = 0, y = 1000, greatest = 1000, lowest = 1000, n;
//bool condition = false;
char arr[1010][2010];
void print(){
    for(int i = lowest + 1; i <= greatest; i++){
        for(int j = 0; j < n; j++){
            if(arr[j][i] == '\\' || arr[j][i] == '/' || arr[j][i] == '_'){
                cout << arr[j][i];
            } else{
                cout << ".";
            }
        }
        cout << "\n";
    }
 //   cout << x << " " << y << " " << lowest << " " << greatest << "\n\n";
}
void down(){
    y++;
    arr[x][y] = '\\';
    x++;
    if(y > greatest){
        greatest = y;
    }
    //print();
}
void up(){
    arr[x][y] = '/';
    x++;
    y--;
    if(y < lowest){
        lowest = y;
    }
    //print();
}
void neutral(){
    //if(arr[x][y - 1] == '')
        if(arr[x - 1][y + 1] == '/' && y == lowest){
            lowest--;
        }
        arr[x][y] = '_';
        x++;
  //  cout<<x << " " << y << " = " <<arr[x][y] << "\n";
    //print();
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        char input;
        cin >> input;
        if(input == 'v'){
            down();
        } else if(input == '^'){
            up();
        } else if(input == '>'){ 
            neutral();
        }
    }
    print();
}