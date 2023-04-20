#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    vector<int>v(n);
    vector<int>m;
    for(auto &i:v)
    {
        cin>>i;
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>v[i+1] || v[i]>v[i-1])
        {
         count+=1;
        }
        else{
            count=1;
        }
         m.push_back(count);
    }
    int a=0;
     a=accumulate(m.begin(),m.end(),a);
     cout<<a<<endl;
    return 0;
    
}