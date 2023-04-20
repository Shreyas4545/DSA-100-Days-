#include<iostream>
#include<vector>
using namespace std;
int display(vector<int> &v1)
{
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<endl;
    }
     cout<<"size is:"<<v1.size()<<endl;
}
int main()
{
    vector<int> v1;
    int n,m;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"enter the element"<<endl;
        cin>>m;
        v1.push_back(m);
    }
    display(v1);

    return 0;
}
