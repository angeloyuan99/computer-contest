#include<iostream>
#include<math.h>
using namespace std;
int digits(int num){
    if(num/10 == 0){
        return 1;
    }
    return 2;
}
int main(){
    int start, end;
    cin>>start>>end;
    int length = end-start;
    int arr[11][11];
    for(int i = 0; i < 11; i++){
        for(int j = 0; j < 11; j++){
            arr[i][j] = 0;
        }
    }
    int direction = 1;
    arr[5][5] = start;
    int x = 5, y = 6;
    for(int i = start+1; i <= end; i++){
      //  cout<<i<<" "<<direction<<" "<<x<<" "<<y<<" ";
        if(direction == 1){
            arr[x][y] = i;
            if(arr[x+1][y]==0){
                direction = 2;
                x++;
            }
            else y++;
        }
        else if(direction == 2){
            arr[x][y] = i;
            if(arr[x][y-1]==0){
                direction = 3;
                y--;
            }
            else{
                x++;
            }
        }
        else if(direction == 3){
            arr[x][y] = i;
            if(arr[x-1][y]==0){
                x--;
                direction = 4;
            }
            else y--;
        }
        else if(direction == 4){
            arr[x][y] = i;
            if(arr[x][y+1]==0){
                y++;
                direction = 1;
            }
            else x--;
        }
     //   cout<<direction<<"\n";
    }
    for(int i = 0; i < 11; i++){
        for(int j = 0; j < 11; j++){
            if(arr[j][i] == 0){
                cout<<"   ";
            } else if(digits(arr[j][i])==2){
                cout<<" "<<arr[j][i];
            } else if(digits(arr[j][i])==1){
                cout<<"  "<<arr[j][i];
            }
        }
        cout<<"\n";
    }
    return 0;
}