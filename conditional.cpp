#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    long long n;
    map<long long, long long> people;
    cin >> n;
    for(long long i = 0; i < n; i++){
        long long b;
        cin >> b;
        people[b] += 1;
    }
    long long total = 0, total1 = 0;
    for(map <long long, long long>::iterator it = people.begin(); it != people.end(); it++){
        if(it->second > total1){
            total1 = it->second;
        } else if(it->second > total){
            total = it->second;
        }
    }
    cout << total + total1 << "\n";
}
// 4
// 50
// 70
// 51
// 70