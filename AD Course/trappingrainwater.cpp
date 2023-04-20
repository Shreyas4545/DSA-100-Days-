#include<bits/stdc++.h>
using namespace std;
int trapping(vector<int>a)
{
     stack<int>s;
     int ans=0;
     int x=a.size();
     for(int i=0;i<x;i++)
     {
        while(!s.empty() && a[s.top()]< a[i])
        {
              int cur=s.top();
              s.pop();
              if(s.empty())
              {
                break;
              }
              int diff=i-s.top()-1;
              ans+=(min(a[s.top()],a[i])-a[cur])*diff;
        }
        s.push(i);
     }
     return ans;
}
int main()
{
    vector<int>v={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trapping(v);
    return 0;
}