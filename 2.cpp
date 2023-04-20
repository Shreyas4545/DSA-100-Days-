#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        vector<long long>v(n);
        map<long long,long long>m;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }
        for(auto i:m)
        {
            if(i.second>1)
            {
                cout<<"NO"<<endl;
                break;
            }
            else{
                count++;
            }
        }
        if(count==n)
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}