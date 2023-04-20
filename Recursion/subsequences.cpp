#include <bits/stdc++.h>
#include <math.h>

//TC - O(2^n * n) for each index 2 times the recursive call is being called and for loop runs every time for every index
//SC - o(n) n recursive calls will be waiting in the stack
using namespace std;
void ans(int index,vector<int>&v,int a[],int n)
{
    if(index>=n)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    v.push_back(a[index]);
    ans(index+1,v,a,n);
    v.pop_back();
    ans(index+1,v,a,n);
}
int main()
{
    int a[] = {3,1,2};
    int n = 3;
    vector<int>v;
    ans(0,v,a,n);
    return 0;
}