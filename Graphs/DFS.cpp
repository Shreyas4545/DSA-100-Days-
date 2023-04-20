#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<vector<int>>adj,vector<int>&vis,vector<int>&ls)
{
    vis[node]=1;
    ls.push_back(node);
    for(auto i:adj[node])
    {
        if(!vis[i])
        {
            dfs(i,adj,vis,ls);
        }
    }
}

int main()
{
    int u,e;
    cin>>u>>e;
    vector<vector<int>>adj(e);
    for(int i=0;i<e;i++)
    {
        int m,n;
        cin>>m>>n;
        adj[m].push_back(n);
        adj[n].push_back(m);
    }
    vector<int>ls;
    int start = 0;
    vector<int>vis(u,0);
    dfs(start,adj,vis,ls);
    for(int i=0;i<ls.size();i++)
    {
        cout<<ls[i]<<" ";
    }
}