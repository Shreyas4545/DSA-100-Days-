#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
            if(m[v[i]]>1)
            {
                cout<<v[i]<<endl;
            }
        }
    }
}