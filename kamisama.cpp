#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
//int arr[1414214];
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    long long homes, eruptions;
    cin >> homes >> eruptions;
    // for(int i = 0; i < 1414214; i++){
    //     arr[i] = 0;
    // }
    vector<long long> distances;
    for(long long i = 0; i < homes; i++){
        long long x, y;
        cin >> x >> y;
        x = abs(x); y = abs(y);
        long long dist = double(sqrt((x * x) + (y * y)) + 0.99999999999);
        distances.push_back(dist);
    }
    for(int i = 0; i < eruptions; i++){
        long long radius;
        int counter = 0;
        cin >> radius;
        for(long long j = 0; j < distances.size(); j++){
            if(distances[j] <= radius){
                counter++;
            }
        }
        cout << counter << "\n";
    }
}