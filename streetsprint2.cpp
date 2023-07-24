#include <iostream>
#include<algorithm>
#include<iomanip>
#include<math.h>
using namespace std;
void pairsort(double a[], double b[], int n) { 
    pair<double, double> pairt[n];
    for (int i = 0; i < n; i++)  { 
        pairt[i].first = a[i]; 
        pairt[i].second = b[i]; 
    }

    sort(pairt, pairt + n);

    for (int i = 0; i < n; i++)  { 
        a[i] = pairt[i].first; 
        b[i] = pairt[i].second; 
    } 
}

int main(){
    int n;
    double temp, best = 0; 
    cin >> n; 
    double times[n];
    double locations[n];

    for(int i = 0; i < n; i++){
        cin >> times[i] >> locations[i];
    }
    pairsort(times, locations, sizeof(times) / sizeof(times[0]));
    for(int i = 1; i < n; i++){
        temp = abs(locations[i] - locations[i - 1]) / (times[i] - times[i - 1]);
        if(temp > best){
            best = temp;
        }

    }

    cout << fixed << setprecision(1) << best;
        return 0;
    }