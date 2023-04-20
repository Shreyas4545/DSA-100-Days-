#include<bits/stdc++.h>
using namespace std;
//using BFS
int main()
{
    int u,e;
    cin>>u>>e;
    vector<vector<int>>adj(u);
    for(int i=0;i<e;i++)
    {
        int m,n;
        cin>>m>>n;
        adj[n].push_back(m);
        adj[m].push_back(n);
    }
    vector<int>vis(u,0);
    bool flag = false; // flag to check if cycle is detected
    for(int i=0;i<u;i++)
    {
        if(!vis[i]) // start BFS from unvisited node
        {
            queue<pair<int,int>>q;
            q.push({i,-1});
            vis[i]=1;
            while(!q.empty())
            {
                int node = q.front().first;
                int parent = q.front().second;
                q.pop();
                for(auto i:adj[node])
                {
                    if(!vis[i])
                    {
                        vis[i]=1;
                        q.push({i,node});
                    }
                    else if(parent != i)
                    {
                        flag = true;
                        cout<<"Has a loop"<<" ";
                        break;
                    }
                }
                if(flag)
                {
                    break;
                }
            }
        }
        if(flag)
        {
            break;
        }
    }
    if(!flag)
    {
        cout<<"NO Loop"<<" ";
    }
    return 0;
}
