#include<iostream>
using namespace std;
int shreyas(int a[],int x,int n)
{
    int start=0,end=0,sum=0,ans=10;
    while(end<n)
    {
        while(sum<=x  && end<n)
        {
            sum+=a[end++];
        }
         while(sum>x && start<n)
         {
            if(end-start<ans)
            {                                                                                                                                                                                                                                                       
                ans=end-start;
            }
            sum-=a[start++];                                                                                                                                                                                                                                                                                                                            
         }
    }
    return ans;
}

int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
   cout<<shreyas(a,x,n);
return 0;

}