#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<int,int>m;
//   map<int,char>m;
//    m.insert({1,"abc"});
//    m.insert({2,"bcd"});
//    m.insert({3,"efg"});
//    m.insert({4,"efg"});
int a[5];
for(int i=0;i<5;i++)
{
    cin>>a[i];
}
for(int i=0;i<5;i++)
{
    m[a[i]]++;
}
   for(auto it:m)
   {
       cout<<it.first<<it.second<<endl;
   }
   for(int i=0;i<5;i++)
   {
    if(m[i]==2)
    {
        cout<<i<<endl;
    }
   }
  
//    auto it=m.find(3);
//    if(it==m.end())
//    {
//        cout<<"No value"<<endl;
//    }
//    else{
//     cout<<"Yes"<<(*it).first<<(*it).second<<endl;
//    }
   return 0;
}
