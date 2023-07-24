#include<iostream>
using namespace std;
class Computer{
int CPUSize;
int RAMSize;
int Storage;
public:
    Computer(int c1, int r1, int s1){
        CPUSize = c1;
        RAMSize = r1;
        Storage = s1;
    }

    void printComputer(){
        cout << "CPU Size" << CPUSize << "\n";
        cout << "Ram Size" << RAMSize << "\n";
        cout << "Storage" << Storage << "\n";
    }
};

class Phone: public Computer{

string strProvider;
string strNum;

public:
    Phone (int c, int r, int s, string p, string n):
        Computer(c, r, s){
            strProvider = p;
            strNum = n;
        }

        void printPhone(){
            cout << "Provider" << "\t" << strProvider << "\n";
            cout << "Phone Number" << "\t" << strNum << "\n";
        }
};

class SmartPhone: public Phone{

int Camera, Battery;

public:
    SmartPhone (int c, int r, int s, string p, string n, int Cam, int b):
        Phone(c, r, s, p, n){
            Camera = Cam;
            Battery = b;
        }

        void printSmartphone(){
            cout << "Camera" << "\t" << Camera << "\n";
            cout << "Battery" << "\t" << Battery << "\n";
        }
};

int main(){
    Computer C (10, 20, 30);
    Phone P (1, 2, 3, "hi", "ho");
}