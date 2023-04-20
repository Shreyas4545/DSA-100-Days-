#include<iostream>
using namespace std;
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
   int prevpower=power(n,p-1);
    return n*prevpower;
}
int main()
{
    cout<<power(2,10);
    return 0;
}
