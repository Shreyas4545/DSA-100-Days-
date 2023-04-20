#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int m[n][x];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<x;j++)
        {
            cin>>m[i][j];
        }
    }
    int r_start=0,r_end=n-1,c_start=0,c_end=x-1;
    while(r_start<=r_end && c_start<=c_end)
    {
        for(int i=c_start;i<=c_end;i++)
        {
            cout<<m[r_start][i]<<" ";
        }
        r_start++;
        for(int j=r_start;j<=r_end;j++)
        {
            cout<<m[j][c_end]<<" ";
;       }
        c_end--;
        for(int k=c_end;k>=c_start;k--)
        {
            cout<<m[r_end][k]<<" ";
        }
        r_end--;
        for(int s=r_end;s>=r_start;s--)
        {
            cout<<m[s][c_start]<<" ";
        }
        c_start++;
    }
    return 0;
}
