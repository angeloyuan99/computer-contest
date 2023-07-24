#include<iostream>
using namespace std;
int main()
{
    int a, b, agrade, bgrade;
    cin>>a;
    cin>>b;
    if(a>=90){
        agrade = 1;
    }
    else if(a>=80){
        agrade = 2;
    }
    else if(a>=70){
        agrade = 3;
    }
    else if(a>=60){
        agrade = 4;
    }
    else agrade = 5;
    
    if(b>=90){
        bgrade = 1;
    }
    else if(b>=80){
        bgrade = 2;
    }
    else if(b>=70){
        bgrade = 3;
    }
    else if(b>=60){
        bgrade = 4;
    }
    else bgrade = 5;
    if(agrade == bgrade) cout<<"Same"<<endl;
    else cout<<"Different"<<endl;
    return 0;
}