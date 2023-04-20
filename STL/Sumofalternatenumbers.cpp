#include<bits/stdc++.h>
using namespace std;
int rob(vector<int>&nums)
{
    int n=nums.size();
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return nums[0];
    }
    else if(n==2)
    {
        return max(nums[0],nums[1]);
    }
    vector<int>a(n);
    a[0]=nums[0];
    a[1]=max(nums[0],nums[1]);
    for(int i=2;i<n;i++)
    {
        a[i]=max(nums[i]+a[i-2],a[i-1]);
    }
    return a[n-1];
}
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<rob(nums)<<endl;
    return 0;
}
