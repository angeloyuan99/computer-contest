#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
struct PointsAndDist{
    double dist;
    int pointa, pointb;
};
bool compareByLength(const PointsAndDist &a, const PointsAndDist &b){
    return a.dist < b.dist;
}
double pointdist(double x1, double x2, double y1, double y2){
    return round(sqrt(abs((x2 - x1) * (x2 - x1)) + abs((y2 - y1) * (y2 - y1))) * 100) / 100;    
}
int main(){
    int n;
    cin >> n;
    for(int k = 0; k < n; k++){
        int points;
        cin >> points;
        double arrx[points], arry[points], dist[points][points];
        for(int i = 0; i < points; i++){
            cin >> arrx[i];
            cin >> arry[i];
        }
        vector<PointsAndDist> pointanddistvector;
        for(int i = 0; i < points; i++){
            for(int j = i + 1; j < points; j++){
                struct PointsAndDist Point;
                Point.pointa = i;
                Point.pointb = j;
                Point.dist = pointdist(arrx[i], arrx[j], arry[i], arry[j]);
                pointanddistvector.push_back(Point);
                //cout << pointanddistvector[pointanddistvector.size() - 1].pointa << " " << pointanddistvector[pointanddistvector.size() - 1].pointb << " " << pointanddistvector[pointanddistvector.size() - 1].dist << "\n";
            }
        }
        sort(pointanddistvector.begin(), pointanddistvector.end(), compareByLength);
        // for(int i = 0; i < points; i++){
        //     cout << pointanddistvector[i].pointa << " " << pointanddistvector[i].pointb << " " << pointanddistvector[i].dist << "\n";
        // }
        bool boolarr[points];
        for(int i = 0; i < points; i++){
            boolarr[i] = false;
        }
        double totaldist = 0;
        for(int i = 0; i < points; i++){
            if(boolarr[pointanddistvector[i].pointa] && boolarr[pointanddistvector[i].pointb]){
                continue;
            }
            boolarr[pointanddistvector[i].pointa] = true;
            boolarr[pointanddistvector[i].pointb] = true;
            totaldist += pointanddistvector[i].dist;
        }
        cout << totaldist << "\n";
    }
    return 0;
}