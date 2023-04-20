 #include <bits/stdc++.h>
using namespace std;
#define N 105
class data{
public:
    int val,apos,bpos;
    data(int a,int b,int c)
    {
        val=a;
        apos=b;
        bpos=c;
    } 
};
struct mycomp{
    bool operator()(data &d1,data &d2)
    {
        return d1.val>d2.val;
    }
};
void print(vector<int>res,int k)
{
    for(int i=0;i<k;i++)
    {
        cout<<res[i]<<endl;
    }
}
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> merge(vector<vector<int>> arr, int K)
    {
        priority_queue<data,vector<data>,mycomp>pq;
        vector<int> res;
        for(int i=0;i<K;i++)
        {
           data d1(arr[i][0],i,0);
           pq.push(d1);
        }
        while(!pq.empty())
        {
            data curr=pq.top();
            pq.pop();
            res.push_back(curr.val);
            int a=curr.apos,b=curr.bpos;
            if(b+1<arr[a].size())
            {
                data d2(arr[a][b+1],a,b+1);
                pq.push(d2);
            }
        }
        return res;
    }
};
int main()
{
   int n;
   cin>>n;
   vector<vector<int>>a(n,vector<int>(n,0));
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        cin>>a[i][j];
    }
   }
   Solution o;
   vector<int>res=o.merge(a,n);
   print(res,n*n);
   return 0;
}