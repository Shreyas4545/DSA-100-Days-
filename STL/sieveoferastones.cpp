#include<iostream>
using namespace std;
int sieve(int n)
{
    if(n<3)
    {
        return 0;
    }
    int p[100]={0};
    for(int i=2;i<=n;i++)
    {
        if(p[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                p[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(p[i]==0)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
    return 0;
}
