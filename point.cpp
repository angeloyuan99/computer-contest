#include <iostream>
using namespace std;
class point{
public:
    int x, y;
    point(int z, int a){
        x = z;
        y = a;
    }
};
class Line{
public:
    int a, b, c, m;
    Line(int slope, int constant){
        m = slope;
        a = -b / m;
        b = constant;
        c = 0;
    }
    Line(int d, int e, int f){
        a = d;
        b = e;
        c = f;
        m = -a / b;
    }
    Line(point p1,point p2){
        m = (p2.y - p1 . y) / (p2.x - p1.x);
        b = -1 * m * p1.x + p1.y;
        a = -b / m;
        c = -(a * p1.x + b * p1.y);
    }
    int Xintercept(){
        return a;
    }
    int Yintercept(){
        return b;
    }
    int slope(){
        return m;
    }
    bool Parallel(Line line2){
        if(m == line2.m){
            return true;
        }
        else {
            return false;
        }
    }
    bool Coincident(Line line2){
        if(m == line2.m){
            if(c == line2.c){
                return true;
            }
        }
        return false;
    }
    void intersect(Line line2){
        int constant1 = -c/b, constant2 = -(line2.c)/line2.b, xcordinate, ycordinate;
        xcordinate = constant1 - constant2/line2.m-m;
        ycordinate = xcordinate * m + constant1;
        cout << "(" << xcordinate << "," << ycordinate << ")" << endl;
    }
};
int main(){
    point p1(0,0);
    point p2(1,1);
    Line line1(p1,p2);
    point p3(2,2);
    point p4(3,3);
    Line line2(p3,p4);
    if(line1.Coincident(line2)){
        cout<<"Pass 1"<<endl;
    }
    return 0;
}