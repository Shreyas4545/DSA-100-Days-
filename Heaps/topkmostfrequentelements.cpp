 #include <bits/stdc++.h>
using namespace std;
class solutions{
  struct node{
    int no;
    int freq;
    node(int a,int b)
    {
        no=a;
        freq=b;
    }
  };

struct mycomp{
    bool operator()(node const&a,node const &b){
       return a.freq<b.freq;
    }
};
public:
    vector<int>ans(vector<int>&v,int k)
    {
        priority_queue<node,vector<node>,mycomp>pq;
        unordered_map<int,int>m;
        for(auto i:v)
        {
              m[i]++;
        }
        for(auto it:m)
        {
            pq.push(node(it.first,it.second));
        }
        vector<int>res;
        while(k--)
        {
            node temp=pq.top();
            pq.pop();
            res.push_back(temp.no);
        }
        return res;
    }

};
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    solutions obj;
    vector<int>a=obj.ans(v,k);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}