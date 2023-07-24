#include<iostream>
using namespace std;
int main(){
    int station, waves;
    cin >> station >> waves;
    int a[station];
    for(int i = 0; i < station; i++){
        a[i] = 0;
    }
    for(int i = 0; i < waves; i++){
        int x, y, z;
        cin >> x >> y >> z;
        a[x - 1] += z;
        a[y] -= z;
    }
    int limit;
    cin >> limit;
    for(int i = 1; i < station; i++){
        a[i] += a[i - 1];
    }
    // for(int i = 0; i < station; i++){
    //     cout << a[i] << "\n";
    // }
    long long bigsum = 0, smallsum = 0, sequence = 0, startnum = 0, greatestsequence = 0;
    long long psa[station];
    for(long long i = 0; i < station; i++){
        bigsum += a[i];
        smallsum += a[i];
        psa[i] = bigsum;
        if(smallsum > limit){
            startnum++;
            smallsum = bigsum - psa[startnum - 1];
        }
        sequence = (i - startnum + 1);
        if(sequence > greatestsequence){
            greatestsequence = sequence;
        }
       // cout << "bigsum: " << bigsum << " smallsum: " << smallsum << " sequence: " << sequence << " startnum: " << startnum << " greatestsequence: " << greatestsequence << "\n";
    }
    cout << greatestsequence << "\n";
 //   cout << greatestsequence << "\n";
}