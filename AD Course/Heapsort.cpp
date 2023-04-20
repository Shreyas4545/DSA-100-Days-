#include<bits/stdc++.h>
using namespace std;
void heapify(int a[],int n,int i)
{
  int l=2*i+1;
  int r=2*i+2;
  int large=i;
  if(l<n and a[l]>a[i])
  {
    large=l;
  }
  if(r<n and a[r]>a[large])
  {
    large=r;
  }
  if(large!=i)
  {
swap(a[i],a[large]);
heapify(a,n,large);
  }
}
void buildheap(int a[],int n)
{
    for(int i=(n/2)-1;i>=0;i--)
    {
        heapify(a,n,i);
    }
}
void heapsort(int a[],int n)
{
    buildheap(a,n);
    for(int i=n-1;i>=0;i--)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    heapsort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}