#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    int ans=0;
    for(int i=0;i<v.size();i++)
    {
        ans+=k/v[i];
        k-=k/v[i]*v[i];
    }
    cout<<ans<<endl;
    return 0;
}