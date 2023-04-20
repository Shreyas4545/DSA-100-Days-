#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>list1;
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        int a;
        cin>>a;
        list1.push_back(a);
    }
    int z=list1.size();
    /*for(int i=0;i<z;i++)
    {
        cout<<list1.back()<<endl;
        list1.pop_back();
    }*/
    for(auto it=list1.begin();it!=list1.end();it++)
    {
        cout<<(*it)<<endl;
    }
    return 0;
}
