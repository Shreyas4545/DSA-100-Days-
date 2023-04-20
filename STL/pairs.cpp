#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
    pair<int,string> v[n];
    for(int i=0;i<n;i++)
    {
        int x;
        string y;
        cin>>x>>y;
        v[i]=make_pair(x,y);
    }

for(int i=0;i<n;i++)
{
    cout<<v[i].first<<" "<<v[i].second<<endl;
}
return 0;
}
