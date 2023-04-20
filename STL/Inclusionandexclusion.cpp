#include<iostream>
using namespace std;
/*int IandE(int n,int a,int b)
{
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    return c1+c2-c3;
}
int main()
{
    int n,a,b;
    cout<<IandE(10,5,7)<<endl;
    return 0;
}*/
//gcd of two numbers using euclids algo
int euclid(int a,int b)
{
    int rem;
    while(b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<euclid(a,b)<<endl;
}
