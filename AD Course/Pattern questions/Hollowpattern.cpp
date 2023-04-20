#include<iostream>
using namespace std;
int main()
{
    int r,col;
    cin>>r>>col;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==1 || i==r || j==1 || j==col)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
