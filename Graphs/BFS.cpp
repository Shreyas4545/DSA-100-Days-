#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,e;
    cin>>v>>e;
    vector<vector<int>>adj(e+1);
    for(int i=0;i<e;i++)
    {
        int m,n;
        cin>>m>>n;
        adj[m].push_back(n);
        adj[n].push_back(m);
    }
    vector<int>vis(v,0);
    vis[0]=1;
    queue<int>q;
    q.push(0);
    vector<int>bfs;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto i:adj[node])
        {
            if(!vis[i])
            {
                vis[i]=1;
                q.push(i);
            }
        }
    }
    for(int i=0;i<bfs.size();i++)
    {
        cout<<bfs[i]<<" ";
    }
}