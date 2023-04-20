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
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    auto it=lower_bound(a.begin(),a.end(),3);
    if(it==a.end())
    {
        cout<<"Not found"<<endl;
        return 0;
    }
    cout<<(*it)<<endl;
    /*auto it=upper_bound(a.begin(),a.end(),8);
    if(it==a.end())
    {
        cout<<"Not found"<<endl;
    }
    cout<<(*it)<<endl;*/

}
