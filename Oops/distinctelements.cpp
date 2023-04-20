#include<iostream>
using namespace std;
int countd(int a[],int n)
{
    int count=1,j;
    for(int i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                break;
            }
        }
        if(i==j)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=countd(a,n);
    cout<<c<<endl;
    return 0;
}
