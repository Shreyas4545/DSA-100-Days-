#include<iostream>
using namespace std;
int shreyas(int a[],int n,int k,int x)
{
  int sum=0,ans=0;
  for(int i=0;i<k;i++)
  {
    sum+=a[i];
  }
  if(sum<x)
  {
    ans=sum;
  }
  for(int i=k;i<n;i++)
  {
     sum-=a[i-k];
     sum+=a[i];   
     if(sum<x)
     {
        ans=max(ans,sum);
     }                                                                                                                                          
  }
return ans;
}
int main()
{
    int n,k,x;
    cin>>n>>k>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<shreyas(a,n,k,x);
}