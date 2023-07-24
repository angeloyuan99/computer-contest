#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int a, b,answer;
    string equation;
    cin>>a;
    cin>>equation;
    cin>>b;
    if(equation == "$"){
        answer = a*a - b*b;
        cout<<"The equation "<<a<<" "<<equation<<" "<<b<<" is equal to "<<answer<<"."<<endl;
    }
    if(equation == "@"){
        answer = (b * a) / (2*a - 3);
        cout<<"The equation "<<a<<" "<<equation<<" "<<b<<" is equal to "<<answer<<"."<<endl;
    }
    if(equation == "#"){
        answer = (a * b)* (b - 14);
        cout<<"The equation "<<a<<" "<<equation<<" "<<b<<" is equal to "<<answer<<"."<<endl;
    }
    return 0;
}
