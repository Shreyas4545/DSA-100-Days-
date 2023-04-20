#include<bits/stdc++.h>
using namespace std;
//using array
/*int main()
{
    int a[]={4,5,2,25,7,8};
    int b[6];
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(a[j]>a[i])
            {
                b[i]=a[j];
                break;
            }
            else{
                b[i]=-1;
            }
        }
    }
    for(int i=0;i<6;i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}*/
//using stack
vector<int>NGE(vector<int>v)
{
    vector<int>a(v.size());
    stack<int>s;
    for(int i=0;i<v.size();i++)
    {
    while(!s.empty() && v[i]>v[s.top()])
    {
        a[s.top()]=i;
        s.pop();
    }
    s.push(i);
    }
    while(!s.empty())
    {
        a[s.top()]=-1;
        s.pop();
    }
    return a;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>a=NGE(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" "<<(a[i]==-1 ? -1:v[a[i]])<<endl;
    }
    return 0;
}
