#include<iostream>
#include<cmath>
using namespace std;
/*int main()
{
    int n,r=0,l;
    cin>>n;
    while(n>0)
    {
        l=n%10;
        r=r*10+l;
        n=n/10;
    }
    cout<<r;
}*/
//find the armstrong number
int main()
{
    int n,l;
    cin>>n;
    int originalno=n,sum=0;
    while(n>0)
    {
        l=n%10;
        sum+=pow(l,3);
        n=n/10;
    }
    if(sum==originalno)
    {
        cout<<"armstrong"<<endl;
    }
    else{
        cout<<"Not armstrong number"<<endl;
    }
    return 0;
}

