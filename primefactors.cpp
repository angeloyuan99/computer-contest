
#include <iostream>
#include <set>
using namespace std;
bool isprime(int n)
{
    if (n == 1)
    {
        return false;
    }
    int i = 2;
    while (i*i <= n)
    {
        if (n % i == 0)
        {
            return false;
        }
        i += 1;
    }
    return true;
}
int main()
{
    int a, b;
    cin>>a>>b;
    for(int i = a; i <= b; i++){
        int temp = i;
        set<int> used;
        while(isprime(temp) == false){
            for(int j = 2; j < temp; j++){
                if(isprime(j)&&temp%j==0){
                    used.emplace(j);
                    temp /= j;
                    break;
                }
            }
        }
        used.emplace(temp);
        cout<<used.size()<<"\n";
    }
    return 0;
}