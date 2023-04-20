#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++)
    {
        int start,end;
        cin>>start>>end;
            v.push_back({start,end});
    }
    sort(v.begin(),v.end(),[&](vector<int>&v2,vector<int>&v1){
        return v2[1]<v1[1];
    });
    int take=1;
    int end=v[0][1];
    for(int i=1;i<n;i++)
    {
        if(v[i][0]>=end)
        {
            take++;
            end=v[i][1];
        }
    }
    cout<<take<<endl;
    return 0;
}