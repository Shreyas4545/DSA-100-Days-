#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j=0,ans=0,zcount=0;
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    for(int j=0;j<v.size();j++)
    { 
        if(v[j]==0)
        {
            zcount++;
        }
        while(zcount>k)
        {
            if(v[i]==0)
            {
                zcount--;
            }
            i++;
        }
        ans=max(ans,j-i+1);
    }
    cout<<ans;
}