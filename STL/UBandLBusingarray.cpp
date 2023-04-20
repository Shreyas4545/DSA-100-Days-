#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    /*int *ptr=lower_bound(a,a+n,26);
    if(ptr==(a+n))
    {
        cout<<"Not found"<<endl;
        return 0;
    }
    cout<<(*ptr)<<endl;*/
    int *ptr=upper_bound(a,a+n,5);
    if(ptr==(a+n))
    {
        cout<<"Not found"<<endl;
        return 0;
    }
    cout<<(*ptr)<<endl;
}
