#include<bits/stdc++.h>
using namespace std;
int main()
{
   /*vector<int>v={1,2,3,4,5};
   vector<int>::iterator it=v.begin();*/
  /*for(int i=0;i<v.size();i++)
  {
      cout<<(*it)<<endl;
      it++;
  }*/
  vector<pair<int,int>>v={{1,2},{2,3},{3,4}};
  vector<pair<int,int>>::iterator it;
  for(it=v.begin();it!=v.end();it++)
  {
      cout<<it->first<<" "<<it->second<<endl;
  }
  return 0;
}
