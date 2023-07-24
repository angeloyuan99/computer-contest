#include<iostream>
using namespace std;
int main(){
    int n, l, distance = 0, time = 0;
    cin >> n >> l;
    int lights[n][3];
    for(int i = 0; i < n; i++){
        cin >> lights[i][0] >> lights[i][1] >> lights[i][2];
        time += lights[i][0];
        distance = lights[i][0];
        while(time % (lights[i][1] + lights[i][2])){
            time++;
        }
    }
    time += l - distance;
    distance = l;
    cout << time << "\n";
}