#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0,sum=0,i=-1;
    map<int,int>m;
    m.insert({0,1});
    while(i<n)
    {
        i++;
       sum+=a[i];
       if(m.find(sum)!=m.end())
        {
          auto b=m.find(sum);
         count+=b->second;
         m.insert({sum,b->second+1});
        }
        else{
            m.insert({sum,1});
        }
    }
    cout<<count;
    return 0;
}