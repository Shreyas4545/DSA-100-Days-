#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n,cur=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
     cur=cur+a[i];
     s.insert(cur);
    }
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<endl;
    }
}
