#include <iostream>
using namespace std;
int main()
{
    int total, vac;
    cin>>total>>vac;
    int arr[total];
    for(int i = 0; i < total; i++){
        cin>>arr[i];
    }
    int t = 0;
    for(int j = 0; j < vac; j++){
        t += arr[j];
    }
    int max = t;
    for(int i = vac; i <= total-2; i++){
        t -= arr[i-vac];
        t += arr[i];
        if(t > max)max = t;
    }
    cout<<max<<endl;
    return 0;
}