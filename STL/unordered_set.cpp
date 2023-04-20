#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<string>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        s.insert(a);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string b;
        cin>>b;
        if(s.find(b)!=s.end())
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
//In multiset we can insert duplicate values but not in set and unordered set
//In unordered maps there is sorted order but it is there in ordered maps
//No duplicates in both ordered and unordered_map but former is used to calculate the freq of occuring strings.
