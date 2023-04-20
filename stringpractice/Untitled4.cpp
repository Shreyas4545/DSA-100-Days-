#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key)
{
    int low=0;
    int high=n-1;
    int mid;
    while(high>=low)
    {
        mid=(low+high)/2;
        if(key==mid)
        {
            return mid;
        }
        if(key>mid)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
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
    int key;
    cin>>key;

    int b=binarysearch(a,n,key);
   cout<<key<<" "<<b;
    return 0;
}
