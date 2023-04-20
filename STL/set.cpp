O#include<bits/stdc++.h>
using namespace std;
void print(set<string>&s)
{
   for(auto &c:s)
   {
       cout<<c<<endl;
   }
}
int main()
{
    set<string>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        s.insert(a);
    }
    print(s);
    return 0;
}
