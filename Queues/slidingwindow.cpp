#include<bits/stdc++.h>
using namespace std;
int main(){
    // 1,3,-1,-3,5,3,6,7
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    multiset<int,greater<int>>s;
    vector<int>ans;
    for(int i=0;i<k;i++)
    {
        s.insert(v[i]);
    }
    ans.push_back(*s.begin());
    for(int i=k;i<n;i++)
    {
        s.erase(s.lower_bound(v[i-k]));
        s.insert(v[i]);
        ans.push_back(*s.begin());
    }
    for(auto &i:ans){
        cout<<i;
    }
    return 0;
    
}
