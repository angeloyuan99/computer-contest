#include<iostream>
#include <math.h>
using namespace std;

int findDigits(int n)
{

    if (n < 0)
        return 0;
    

    if (n <= 1)
        return 1;
    
    double digits = 0;
    for (int i=2; i<=n; i++)
        digits += log10(i);
    
    return (digits) + 1;
}
int main()
{
    for(int i = 0; i < 5; i++){
        int input;
        cin>>input;
        cout<<"The length of "<<input<<"! is "<<findDigits(input)<<endl;
    }
    return 0;
}
