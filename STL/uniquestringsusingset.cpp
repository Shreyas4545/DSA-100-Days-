#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    unordered_set<string>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        s.insert(x);
    }
    /*for(auto x=s.begin();x!=s.end();x++)
    {
        cout<<(*x)<<endl;
    }*/
    /*for(auto x:s)
    {
        cout<<x<<endl;
    }*/
    //check whether the given string is present or not
    int q;
    cin>>q;
    while(q--)
    {
        string et;
        cin>>et;
        if(s.find(et)==s.end())
        {
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
}

