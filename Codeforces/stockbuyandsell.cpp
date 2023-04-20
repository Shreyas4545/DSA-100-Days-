#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    priority_queue<int>p;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    // int ans=0,min1=INT_MAX,index;
    // for(int i=0;i<n;i++)
    // {
    //     ans=v[i];
    //     if(ans<min1)
    //     {
    //         min1=ans;
    //         index=i;
    //     }
    // }
    // for(int i=index;i<n;i++)
    // {
    //     p.push(v[i]);
    // }
    // int a=p.top();
    // p.pop();
    // int ans2=a-min1;
    int p=0;
    int a=v[0];
    for(int i=1;i<n;i++)
    {
        a=min(a,v[i]);
        p=max(p,v[i]-a);
    }
    cout<<p<<endl;
    return 0;
}