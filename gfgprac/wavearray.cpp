#include<iostream>
using namespace std;
int swap(int a[],int i,int j)
{
    int temp;

        temp=a[i];
        a[i]=a[j];
        a[j]=temp;

}
int main()
{
    int n;
    cin>>n;
    int a[50];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"before wavearray"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    for(int i=1;i<n;i+=2)
    {
        if(a[i]>a[i-1])
        {
            swap(a,i,i-1);
        }
        else if(a[i]>a[i+1] && i<=n-2)
        {
            swap(a,i,i+1);
        }
    }
    vec1.pop_back();
    cout<<"after wavearray"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
