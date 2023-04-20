#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<string,int>m;
  int n;
  cin>>n;
  while(n--)
  {
      int t;
      cin>>t;
      string s;
      cin>>s;
      if(t==1)
      {
          int a;
          cin>>a;
          m[s]+=a;
      }
      else if(t==0)
      {
          m[s]=0;
      }
      else{
        cout<<m[s]<<endl;
      }
  }
}
