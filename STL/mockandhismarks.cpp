#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    map<int,multiset<string>>m;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x>>a;
        m[a].insert(x);
    }
    auto it=--m.end();
    while(true)
    {
           auto &c=(*it).second;
        int b=(*it).first;
        for(auto d:c)
        {
            cout<<d<<" "<<b<<endl;
        }
        if(it==m.begin())
        {
            break;
        }
        it--;
    }
    return 0;
}
