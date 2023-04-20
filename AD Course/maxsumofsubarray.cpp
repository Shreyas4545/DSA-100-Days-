#include<iostream>
using namespace std;
int kadane(int a[],int n)
{
    int cursum=0;
    int maxsum=0;
    for(int i=0;i<n;i++)
    {
        cursum=cursum+a[i];
        maxsum=max(maxsum,cursum);
        if(cursum<0)
        {
            cursum=0;
        }
    }
    return maxsum;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x=kadane(a,n);
    cout<<x<<endl;
    return 0;
}
