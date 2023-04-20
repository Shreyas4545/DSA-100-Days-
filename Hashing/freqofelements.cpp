#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(auto &i:v)
    {
        cin>>i;
    }
    for(int i=0;i<n;i++)
    {
        mp[v[i]]++;
    }
    // unordered_map<int,int> :: iterator  i;
    for(auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}