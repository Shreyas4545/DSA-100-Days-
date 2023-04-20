#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b;
    cin>>n>>a>>b;
    long long c=a+b;
    long long d=n/c;
    long long x=n%c;
    long long count=3*d;
    if(x<=3)
    {
        count+=x;
    }
    else
    {
        count+=3;
    }   
    cout<<count<<endl;
    return 0;
}
