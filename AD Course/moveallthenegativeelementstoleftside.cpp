#include<iostream>
using namespace std;
int main() {
	int n,j=0;
	cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
           if(i!=j)
           {
               swap(a[i],a[j]);
           }
           j++;
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
	return 0;
}
