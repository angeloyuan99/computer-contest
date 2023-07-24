#include <iostream>
using namespace std;
int main()
{
    int num, num2, freq, counter=0;
    cin>>num>>freq;
    for(int i = 0; i < num; i++){
        cin>>num2;
        if(num2 % freq == 0){
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}