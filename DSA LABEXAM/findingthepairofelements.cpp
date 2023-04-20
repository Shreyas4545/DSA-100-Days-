#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    cin>>k;
    int i=0,j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]==k)
        {
            cout<<a[i]<<a[j]<<k<<endl;
        }
        else if(a[i]+a[j]>k)
        {
            j--;
        }
        else if(a[i]+a[j]<k)
        {
            i++;
        }
    }
    return 0;
}
