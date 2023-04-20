#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int print(int n)
{
    /*if(n==0)
    {
        return;
    }
    cout<<n<<":";
    print(n-1);*/
    /*if(n==0)
    {
        return;
    }
    print(n-1);
    cout<<n<<endl;*/

    //Both decreasing and increasing
    /*if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    print(n-1);
    cout<<n<<endl;*/

    //factorial
    /*if(n==0 || n==1)
    {
        return 1;
    }
    return n*print(n-1);*/

    //exponential
}
int power(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    int a=power(m,n-1);
    int b=a*m;
    return b;
}
int main()
{
    //cout<<print(5);
    cout<<power(5,3);
}
