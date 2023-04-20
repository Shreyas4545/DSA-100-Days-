#include<bits/stdc++.h>
using namespace std;
int ispalindrome(int n)
{
    int temp=n,number=0;
    while(temp>0)
    {
        number=number*10+temp%10;
        temp=temp/10;
    }
    if(number==n)
    {
       return 1;
    }
    return 0;
}
int shreyas(vector<int>v,int k)
{
    int sum=0;
    for(int i=0;i<k;i++)
    {
       sum=sum*10+v[i];
    }
    if(ispalindrome(sum))
    {
        return 0;
    }
    for(int j=k;j<v.size();j++)
    {
        sum=(sum%(int)pow(10,k-1))*10+v[j];
        if(ispalindrome(sum))
        {
            return j-k+1;
        }
    }
    return -1;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    int ans=shreyas(v,k);
    if(ans==-1)
    {
        cout<<"No";
    }
    else{
        for(int i=ans;i<ans+k;i++)
        {
            cout<<v[i]<<endl;
        }
    }

    return 0;
}