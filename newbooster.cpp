#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    unsigned long long rows, columns, chairs, columnsneeded;
    cin >> rows >> columns >> chairs;
    for(unsigned long long i = 0; i <= columns; i++){
        if(rows * i >= chairs){
            columnsneeded = i;
            break;
        }
    }
    unsigned long long seats[chairs];
    for(unsigned long long i = 0; i < chairs; i++){
        cin >> seats[i];
    }
    unsigned long long k = 0, seating[rows][columnsneeded];
    for(unsigned long long i = 0; i < rows; i++){
        for(unsigned long long j = 0; j < columnsneeded; j++){
            seating[i][j] = 0;
        }
    }
    sort(seats, seats + chairs, greater<unsigned long long>());
    for(unsigned long long i = 0; i < rows; i++){
        for(unsigned long long j = 0; j < columnsneeded && k < chairs; j++){
            seating[i][j] = seats[k];
            k++;
        }
    }
    unsigned long long counter = 0;
    for(unsigned long long i = 1; i < rows; i++){
        for(unsigned long long j = 0; j < columnsneeded; j++){
            if(seating[i][j] != 0){
                counter += (i + (seating[0][j] - seating[i][j]));
            }
        }
    }
    cout << counter << "\n";
}