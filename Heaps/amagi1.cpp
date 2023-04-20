#include<bits/stdc++.h>
using namespace std;
int shreyas(vector<int>a,int n)
{
    //1233 
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    int max_c=0,count=0,res=-1;
    for(auto i:mp)
    {
        if(max_c<i.second)
        {
            res=i.first;
            max_c=i.second;
        }
    }
    for(int i=0;i<a[i];i++)
    {
        if(a[i]<res)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a)
    {
        cin>>i;
    }
    cout<<shreyas(a,n);
    return 0;
}