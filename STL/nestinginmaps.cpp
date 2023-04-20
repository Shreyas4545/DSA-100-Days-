#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<pair<string,string>,vector<int>>m;
    int n,ct;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string fn,ln;
        cin>>fn>>ln>>ct;
        for(int j=0;j<ct;j++)
        {
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }
    for(auto &p:m)
    {
        auto &a=p.first;
        auto &b=p.second;
        cout<<a.first<<a.second<<endl;
       for(auto &c:b)
        {
            cout<<c<<endl;
        }
    }
    return 0;

}
