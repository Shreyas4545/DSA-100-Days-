#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    bool d=false;
    cin>>n>>k;
  vector<int>a(n);
  for(int &i:a)
  {
      cin>>i;
  }
  sort(a.begin(),a.end());
  for(int i=0;i<n;i++)
  {
      int x=i+1,y=n-1;
      while(x<y){
      int cur=a[i]+a[x]+a[y];
      if(cur==k)
      {
          d=true;
      }
      if(cur<k)
      {
          x++;
      }
      else{
        y--;
      }
      }
  }
  cout<<d<<endl;
return 0;
}
