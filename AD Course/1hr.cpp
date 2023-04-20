#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin>>a;
    cin>>b>>c;
    while(a--)
    {
        int sum=0;
        vector<int>v(b);
    for(int i=0;i<b;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
        int x=v.size();
        int i=0;
    while(i!=c)
    {
        sum+=v[x-1];
        x-=1;
        i++;
    }
        cout<<(sum/c)<<endl;
    }
    return 0;
}
