#include<bits/stdc++.h>
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>m;
    int n,b;
    cin>>n;
  for(int i=0;i<n;i++)
  {
     string x;
     cin>>x;
     m[x]++;
  }
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
