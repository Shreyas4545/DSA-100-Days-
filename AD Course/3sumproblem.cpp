#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,l,h;
    cin>>n>>x;
    bool found=false;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
       l=i+1;
       h=n-1;
       while(l<h){
        int curr=v[i]+v[l]+v[h];
       if(curr==x)
       {
        found=true;
        break;
       }
       else if(curr<x)
       {
        l++;
       }
       else{
        h--;
       }
       }
    }
    if(found==true)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}