#include <iostream>

using namespace std;

class Point{

//Declaring the attributes
public:
int intX, intY; //the x and y coordinates of the point

//The constructor for a Class
public:
Point(int x, int y){
intX = x;
intY = y;

}

//Method for the object
void translate(int dx, int dy){
intX += dx;
intY += dy;
}

//Method that print the Point Object
void printPoint(){
cout<<"x: "<<intX<<" y: "<<intY<<endl;

}

//get methods -> allows us to access the attributes of
// the object
int getX(){
return intX;

}

int getY(){
return intY;
}

//
void setX(int x){
intX = x;
}

void setY(int y){
intY = y;
}
};

//circle class definition
//the inheritance definition
class Circle : public Point{
    //we need to only define the extra instance variable
    //that does not belong to point but belongs to circle
    int intR;//the radius of the circle
    //the constructor definition for the circle
    public:
        Circle(int x, int y, int r) :Point(x, y){
            intR = r;
        }
    int getRadius(){
        return intR;
    }


};
int main()
{
    Point P (10, 20);
    P.printPoint();
    Circle C(10, 20, 10);
    C.printPoint();
    C.translate(-10, -20);
    C.printPoint();
    cout << C.getRadius() << "\n";
    return 0;
}