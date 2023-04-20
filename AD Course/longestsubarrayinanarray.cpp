#include<iostream>
using namespace std;
//code for subarray
/*
int main()
{
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            cout<<sum;
        }
    }
    return 0;
}
*/
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int curr=2,j=2,ans=2,pd=a[1]-a[0];
    while(j<n)
    {
        if(pd==a[j]-a[j-1])
        {
            curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
    return 0;

}
