#include<bits/stdc++.h>
using namespace std;
int search(int a[],int key,int l,int r)
{
    if(left>right)
    {
        return -1;
    }
    int mid=(l+r)/2;
    if(a[mid]==key)
    {
        return mid;
    }
    if(a[l]<=a[mid])
    {
     if(key>=a[l] && key<=a[mid])
     {
        return search(a,key,l,mid-1);
     }   
     return search(a,key,mid+1,r);
    }
    if(key>=a[l] && key<=a[mid])
    {
        return search(a,key,l,mid-1);
    }
    return search(a,key,mid+1,r);
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
    cout<<search(a,k,0,n-1);

}