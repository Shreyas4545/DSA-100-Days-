#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
priority_queue<int,vi>pqmax;
    priority_queue<int,vi,greater<int>>pqmin;
int shreyas(int x)
{
    if(pqmax.size()==pqmin.size())
    {
        if(pqmax.size()==0)
        {
            pqmax.push(x);
        }
        else{
            if(x>=pqmax.top())
            {
                pqmin.push(x);
            }
            else{
                pqmax.push(x);
            }
        }
    }
    else{
        if(pqmax.size()>pqmin.size())
        {
            if(x>=pqmax.top())
            {
                pqmin.push(x);
            }
            else{
                int temp=pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }
        }
        else{
            if(x<=pqmin.top())
            {
                pqmax.push(x);
            }
            else{
                int temp=pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x);
            }
        }
    }
}
double findmedian()
{
    if(pqmax.size()==pqmin.size())
    {
        return (pqmax.top()+pqmin.top())/2.0;
    }
    else if(pqmax.size()>pqmin.size())
        return pqmax.top();
    else{
      return pqmin.top();
    }
}
int main()
{
     shreyas(10);
     cout<<findmedian()<<endl;
     shreyas(15);
     cout<<findmedian()<<endl;
     shreyas(21);
     cout<<findmedian()<<endl;
     return 0;
}