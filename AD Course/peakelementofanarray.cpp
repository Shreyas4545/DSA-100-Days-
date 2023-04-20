#include<bits/stdc++.h>
using namespace std;
int peekelement(int a[],int n,int l,int h)
{
    int mid=(l+h)/2;
    if((mid==0 || a[mid]>=a[mid-1]) && (mid==n-1 || a[mid]>=a[mid+1]))
    {
        return mid;
    }
    else if(mid>0 && a[mid]<a[mid-1])
    {
        return peekelement(a,n,l,mid-1);
    }
    else{
        return peekelement(a,n,mid+1,h);
    }
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<peekelement(a,n,0,n-1);
return 0;
}