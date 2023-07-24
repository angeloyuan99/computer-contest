#include<iostream>
#include<math.h>
using namespace std;
struct point{
    double x, y;
};
double distance(double x1, double y1, double x2, double y2){
    return round(sqrt(abs((x2 - x1) * (x2 - x1)) + abs((y2 - y1) * (y2 - y1))) * 100) / 100;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int cases;
        cin >> cases;
        point points[cases];
        for(int j = 0; j < cases; j++){
            cin >> points[j].x  >> points[j].y;
        }
        int smallestdistance = INT_MAX, totaldistance = 0;
        bool used[cases], entirelytrue = true;
        for(int j = 0; j < cases; j++){
            used[j] = false;
        }
        while(true){
            for(int j = 0; j < cases; j++){
                for(int k =  j + 1; k < cases; k++){
                    if(distance(points[j].x, points[j].y, points[k].x, points[k].y) < smallestdistance && (used[j] == false || used[k] == false)){
                        smallestdistance = distance(points[j].x, points[j].y, points[k].x, points[k].y);
                        used[j] = true;
                        used[k] = true;
                    }
                }
            }
            totaldistance += smallestdistance;
            bool onefalse = true;
            for(int i = 0; i < cases; i++){
                if(used[i] == false){
                    onefalse = false;
                }
            }
            if(onefalse == true){
                break;
            }
        }
        cout << totaldistance << "\n";
    }
    return 0;

}