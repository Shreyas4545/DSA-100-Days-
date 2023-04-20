#include<bits/stdc++.h>
using namespace std;
void print(set<int>s)
{
    for(auto i:s)
    {
        cout<<(i)<<endl;
    }
}
int maxele(set<int>s)
{
    int maxe;
    if(!s.empty())
    {
        maxe=*(s.rbegin());

    }
    return maxe;
}
int minele(set<int>s)
{
    int mine;
    if(!s.empty())
    {
        mine=*s.begin();
    }
    return mine;
}
int main()
{
     set<int>s;
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         int x;
         cin>>x;
         s.insert(x);
     }
     int b=maxele(s);
     int c=minele(s);
     cout<<b<<endl<<c<<endl;
     print(s);

}
