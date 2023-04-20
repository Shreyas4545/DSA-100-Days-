#include<iostream>
using namespace std;
int dnfsort(int a[],int n)
{
    int l=0;
    int mid=0;
    int h=n-1;
while(mid<=h){
        if(a[mid]==0)
        {
            swap(a[mid],a[l]);
            l+=1;
            mid+=1;
        }
        else if(a[mid]==1)
        {
            mid+=1;
        }
        else
        {
            swap(a[h],a[mid]);
            h-=1;
        }
    }
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
    dnfsort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
