#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>m;
    map<int,int>m1;
    vector<int>v(n);
    vector<int>v1(n-1);
    vector<int>v2(n-2);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        m[v[i]]++;
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>v1[i];
        m[v1[i]]++;
        m1[v1[i]]++;
    }
    for(auto i:m)
    {
        if(i.second==1)
        {
            cout<<i.first<<endl;
        }
    }
    for(int i=0;i<n-2;i++)
    {
        cin>>v2[i];
        m1[v2[i]]++;
    }
    for(auto i:m1)
    {
        if(i.second==1)
        {
            cout<<i.first<<endl;
        }
    }

    return 0;
}