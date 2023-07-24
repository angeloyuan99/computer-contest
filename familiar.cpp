#include<iostream>
using namespace std;
int main(){
    long long n, m, counter = 0, highestsequence = 0, sequence = 0;
    cin >> n >> m;
    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        if((counter + a) >= m){
            if(sequence > highestsequence){
                highestsequence = sequence;
            //    cout << "new highest sequence: " << highestsequence << "\n";
            }
         //   cout << "sequence: " << sequence << "\n" << "counter: " << counter + a << "\nm: " << m << "\n";
            sequence = 0;
            counter = 0;
        } else{
            sequence++;
            counter += a;
         //   cout << "sequence: " << sequence << "\n" << "counter: " << counter << "\n";
        }
    } 
    cout << highestsequence << "\n";
}   