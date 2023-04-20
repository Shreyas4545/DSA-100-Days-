vector<int>vis(u,0);
    // queue<pair<int,int>>q;
    // q.push({0,-1});
    // vis[0]=1;
    // bool flag = false;
    // while(!q.empty())
    // {
    //     int node = q.front().first;
    //     int parent = q.front().second;
    //     q.pop();
    //     for(auto i:adj[node])
    //     {
    //         if(!vis[i])
    //         {
    //             vis[i]=1;
    //             q.push({i,node});
    //         }
    //         else if(parent != i)
    //         {
    //             flag = true;
    //             cout<<"Has a loop"<<" ";
    //             break;
    //         }
    //     } 
    // }
    // if(!flag)
    // {
    //     cout<<"NO Loop"<<" ";
    // }