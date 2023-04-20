#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int len[n]={0};
    len[0]=1;
    for(int i=1;i<n;i++)
    { 
        for(int j=0;j<i;j++)
        {
         if(a[j]<a[i] && len[j]>len[i])
         {
           len[i]=len[j];
         }
        }
        len[i]++;
    }
    for(int i=0;i<n;i++)
    {
        count=max(count,len[i]);
    }
    cout<<count<<endl;
    return 0;
}