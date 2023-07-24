#include<iostream>
#include<algorithm>
using namespace std; 

int main() 
{
    int n,m,a[100],dp[100];
    cin>>n >> m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n&&sum<=m;i++) 
    {
        int j=0;
        sum=sum+a[i];
        if(sum>m)
        {
            dp[j]=sum-a[i];
        }
        else dp[j]=sum;
        j++;
        sum=0;
    }
    sort(dp,dp+n);
    cout<<dp[n-2];
    return 0;
}