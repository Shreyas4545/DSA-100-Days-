#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int,greater<int>>s;
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(auto &i:a)
    {
        cin>>i;
    }
    //1 2 3 4 5 6
    vector<int>ans;
    for(int i=0;i<k;i++)
    {
        s.insert(a[i]);
    }
    ans.push_back(*s.begin());
    for(int i=k;i<n;i++)
    {
        s.erase(s.lower_bound(a[i-k]));
        s.insert(a[i]);
        ans.push_back(*s.begin());
    }
    for(auto i:ans)
    {
        cout<<i<<" ";

    }

    return 0;

}
