#include<bits/stdc++.h>
using namespace std;
int previous(int b[],int ps[]){
    
   stack<int>s;
   int x=sizeof(b)/sizeof(b[0]);
   for(int i=0;i<x;i++)
   {
    while(!s.empty() && b[s.top()]>=b[i])
    {
        s.pop();
    }
    if(s.empty())
    {
     ps[i]=-1;
    }
    else{
        ps[i]=s.top();
        s.pop();
    }
    s.push(i);
   }
}
int next(int c[],int ns[])
{
    stack<int>s;
    int x=sizeof(c)/sizeof(c[0]);
    for(int i=x-1;i>=0;i--)
    {
        while(!s.empty() && c[s.top()]>=c[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            ns[i]=x;
        }
        else{
            ns[i]=s.top();
            s.pop();
        }
        s.push(i);
    }
}
int maxarea(int z[])
{
    int maxans=0;
    int f=sizeof(z)/sizeof(z[0]);
   int*ps=new int[f];
   int*ns=new int[f];
   previous(z,ps);
   next(z,ns);
   int cur;
   for(int i=0;i<f;i++)
   {
     cur=(ns[i]-ps[i]+1)*z[i];
    maxans=max(maxans,cur);
   }
    return maxans;
}
int main()
{
    int a[]={4,2,1,5,6,3,2,4,2};
    cout<<maxarea(a);
    return 0;
}