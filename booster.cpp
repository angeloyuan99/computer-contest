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
  //  cout << columnsneeded << " " << rows * columnsneeded;
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
    // for(unsigned long long i = 0; i < chairs; i++){
    //     cout << seats[i] << " ";
    // }
    // cout << "\n\n";
    unsigned long long counter = 0;
//     for(unsigned long long i = 0; i < rows; i++){
//         for(unsigned long long j = 0; j < columnsneeded; j++){
//             cout << seating[i][j] << " ";
//         }
//         cout << "\n";
//     }
//    cout << counter << "\n\n";
    for(unsigned long long i = 1; i < rows; i++){
        for(unsigned long long j = 0; j < columnsneeded; j++){
            if(seating[i][j] != 0){
                unsigned long long temp = seating[i - 1][j] + 1;
                counter += (temp - seating[i][j]);
                seating[i][j] = seating[i - 1][j] + 1;
            //     for(unsigned long long i = 0; i < rows; i++){
            //         for(unsigned long long j = 0; j < columnsneeded; j++){
            //             cout << seating[i][j] << " ";
            //         }
            //         cout << "\n";
            //     }
            //    cout << counter << "\n\n";
            }
        }
    }
    // if(counter == 10019920793){
    //     cout << chairs << " " << rows << "\n";
    // }
    cout << counter << "\n";
}