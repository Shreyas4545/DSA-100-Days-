#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    vector<int>v(k);
    for(int i=0;i<k;i++)
    {
        cin>>v[i];
    }
    pair<int,int>ans;
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=v[i];
    }
    if(sum%3==0)
    {
        ans=make_pair(0,k-1);
    }
        cout<<ans.first<<endl<<ans.second<<endl;
    return 0;
}