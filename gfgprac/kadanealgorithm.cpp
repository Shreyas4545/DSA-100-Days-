#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[50];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int curr=0,maxt=0;
   for(int i=0;i<n;i++)
   {
      curr=curr+a[i];
      if(curr>maxt)
      {
          maxt=curr;
      }
      else if(curr<0)
      {
          curr=0;
      }
   }
   printf("%d\n",maxt);
}
