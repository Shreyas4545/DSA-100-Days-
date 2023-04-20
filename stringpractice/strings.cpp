#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int *ptr;
     ptr=(int*)malloc(100*sizeof(int));
     if(ptr==NULL)
     {
         cout<<"memory not allocated";
         exit(0);
     }


     for(int i=0;i<n;i++)
     {
         cin>>*(ptr+i);
     }
      for(int i=0;i<n;i++)
     {
         cout<<i+1;
     }
     for(int i=1;i<n;i++)
     {
         if(*ptr<*(ptr+i))
         {
             *ptr=*(ptr+i);
         }
     }
              cout<<"the largest element is"<<*ptr;




}
