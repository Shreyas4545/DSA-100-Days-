#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    set<int>s1;
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>v1(n);
    vector<int>v2;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        s.insert(v[i]);
    }
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
        s1.insert(v1[i]);
    }
    for(auto i:s)
    {
        v2.push_back(i);
    }
    for(auto i:s1)
    {
        v2.push_back(i);
    }
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<endl;
    }
    return 0;
}