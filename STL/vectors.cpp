#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<(*it)<<endl;
    }
    v.erase(v.begin()+n);
    for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<endl;
     }
}
