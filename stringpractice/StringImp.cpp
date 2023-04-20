#include<bits/stdc++.h>
using namespace std;
int main()
{
     string a="hackerrank";
     bool flag=false;
     string s="hereiamstackerrank";
     string x;
    for(int i=0;i<s.size();i++)
    {
         x="";
        int k=0;
        for(int j=i;j<s.size();j++)
        {
                if(a[k]==s[j])
                {
                x+=s[j];
                 k++;   
                }
        }
        if(x==a)
        {
            flag=true;
            break;
        }
    }
    cout<<x<<endl;
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}