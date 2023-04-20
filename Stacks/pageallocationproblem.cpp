#include<bits/stdc++.h>
using namespace std;
bool shreyas(int x,vector<int>a,int k)
{
    int s=1,pages=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>x){
            return false;
        }
        if(pages+a[i]>x)
        {
        s+=1;
        pages=a[i];
        }
        else{
            pages+=a[i];
        }
    }
    if(s>k)
    {
        return false;
    }
    else{
        return true;
    }
}
int main()
{
    int n,sum=0,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int &i:v)
    {
        cin>>i;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        sum=sum+v[i];
    }
    int l=v[0],h=sum,res=-1,mid;
    while(l<=h)
    {
       mid=(l+h)/2;
       if(shreyas(mid,v,k))
       {
           res=mid;
           h=mid-1;
       }
       else{
          l=mid+1;
       }
    }
    cout<<res<<endl;
    return 0;
}