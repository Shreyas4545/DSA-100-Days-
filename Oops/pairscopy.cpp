#include<bits/stdc++.h>
using namespace std;
int main()
{
   /* pair<int,string> p;
    p={2,"abc"};
    pair<int,string> &p1=p;
    p1.first=3;
    p1.second="abcd";
    cout<<p.first<<" "<<p.second<<endl;*/
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int>p1[3];
    p1[0]={1,2};
    p1[1]={2,3};
    p1[2]={3,4};
    for(int i=0;i<3;i++)
    {
        cout<<p1[i].first<<" "<<p1[i].second<<endl;
    }
    return 0;
}
