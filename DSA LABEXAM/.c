#include<iostream>
using namespace std;
int main()
{
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    int i=0,j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]==k)
        {
            printf("%d+%d=%d",a[i],a[j],k);
            break;
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
