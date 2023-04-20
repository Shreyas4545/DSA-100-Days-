#include<bits/stdc++.h>
using namespace std;
// 100 80 60 70 60 75 85
/*int stocksspan(int a[],int n)
{
    int b[n];
    for(int i=0;i<n;i++)
    {
        int days=0;
        for(int j=i;j>=0;j--)
        {
            if(a[i]>=a[j])
            {
                days++;
            }
            else{
                break;
            }

        }
        b[i]=days;
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    stocksspan(a,n);
    return 0;
}*/
vector<int> stocksspan(vector<int>a)
{
    stack<pair<int,int>>s;
    vector<int>res;
    // for(int i:a)
    // {
    //     int days=1;
    //     while(!s.empty() and s.top().first<=i)
    //     {
    //         days+=s.top().second;
    //         s.pop();
    //     }
    //     s.push({i,days});
    //     res.push_back(days);
    // }
    for(int i:a)
    {
        int days=1;
        while(!s.empty() && s.top().first<=i)
        {
             days+=s.top().second;
             s.pop();
        }
        s.push({i,days});
        res.push_back(days);
    }
    return res;
}
int main()
{
    vector<int>a={100,80,60,70,60,75,85};
    vector<int>res=stocksspan(a);
    for(int i:res)
    {
        cout<<i<<" ";
    }
    return 0;
}
