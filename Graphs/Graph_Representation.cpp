#include <bits/stdc++.h>
using namespace std;
int main()
{
   int u,v;
   cin>>u>>v;
   vector<vector<int>>adj(u+1);
   for(int i=0;i<v;i++)
   {
     int m,n;
     cin>>m>>n;
     adj[m].push_back(n);
     adj[n].push_back(m);
   }
   for(int i=0;i<adj.size();i++)
   {
      for(int j=0;j<adj[i].size();j++)
      {
        cout<<i<<"->";
        cout<<adj[i][j]<<" ";
      }
      cout<<endl;
   }
}