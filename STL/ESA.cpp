#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>v;
    vector<int>v1;
    vector<int>v2={1,2,3,4,5};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    //v.erase(v.begin(),v.begin()+2);
    vector<int>::iterator iter=v.begin();
    v.insert(iter+3,500);
    vector<int>::iterator iter1=find(v.begin(),v.end(),1);
    if(iter1!=v.end())
    {

        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    //copy(v2.begin(),v2.begin()+3,v1.begin());
    /*for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<endl;
    }*/
    v1.swap(v);
    v1.pop_back();
    for(auto it=v1.begin();it!=v1.end();it++)
    {
        cout<<(*it)<<endl;
    }
    return 0;
}
