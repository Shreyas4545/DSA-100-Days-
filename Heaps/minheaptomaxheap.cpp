#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i)
{
  int lar=i,l=2*i+1;
  int r=2*i+2;
  if(l<n and arr[l]>arr[i]){
    lar=l;
  }
  if(r<n and arr[r]>arr[lar])
  {
     lar=r;
  }
  if(lar!=i)
  {
    swap(arr[i],arr[lar]);
    heapify(arr,n,lar);
  }
}
void buildheap(int arr[],int N)
{
    for(int i=(N-2)/2;i>=0;i--)
    {
         heapify(arr,N,i);
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
buildheap(a,n);
 for(int i=0;i<n;i++)
 {
    cout<<a[i]<<endl;
 }
 return 0;
}