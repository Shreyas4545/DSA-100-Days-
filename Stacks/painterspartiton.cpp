#include<bits/stdc++.h>
using namespace std;
int shreyas(int a[],int n,int x)
{
    int start=0,end=0,sum=0,minlength=n+1;
    while(end<n)
    {
        while(sum<=x && end<n)
        {
            sum+=a[end++];
        }
        while(sum>x && start<n)
        {
            if(end-start<minlength)
            {
                minlength=end-start;
            }
            sum-=a[start++];
        }
    }
    return minlength;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<shreyas(a,n,k);
    return 0;
}