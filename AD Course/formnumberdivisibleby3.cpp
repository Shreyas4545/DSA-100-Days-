#include<bits/stdc++.h>
using namespace std;
void shreyas(vector<int>a,int k)
{
    bool found=false;
    pair<int,int>ans;
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=a[i];
    }
    if(sum%3==0)
    {
        ans=make_pair(0,k-1);
        found=true;
    }
    for(int j=k;j<a.size();j++)
    {
        if(found)
        {
            break;
        }
        sum=sum-a[j-k]+a[j]; //sliding window technique
        if(sum%3==0)
        {
            ans=make_pair(j-k+1,j);
            found=true;
        }

    }
    if(!found)
    {
        ans=make_pair(-1,0);
    }
    if(ans.first==-1)
    {
        cout<<"No such subarray exists !"<<endl;
    }
    else{
        for(int i=ans.first;i<=ans.second;i++)
        {
            cout<<a[i];
        }
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    shreyas(v,k);
    return 0;
}