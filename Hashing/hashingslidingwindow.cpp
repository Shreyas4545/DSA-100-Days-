#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ans=INT16_MAX,sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=v[i];
    }
    ans=min(ans,sum);
    for(int i=1;i<n-k+1;i++)
    {
        sum-=v[i-1];
        sum+=v[i+k-1];
        ans=min(ans,sum);
    }
    cout<<ans<<endl;
}