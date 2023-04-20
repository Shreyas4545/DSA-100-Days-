#include<bits/stdc++.h>
using namespace std;
int shreyas(int n,int m)
{
 if(m==0 || n==0)
 {
    return 0;
 }
 if(m==1 || n==1)
 {
    return 1;
 }
 return shreyas(m-1,n)+shreyas(m,n-1);
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<shreyas(n,m);
}