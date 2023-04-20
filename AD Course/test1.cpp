 #include <bits/stdc++.h>
using namespace std;
// void solve(int n){
//    if ((n - 2) % 3 == 0)
//       cout << 1 << ", " << 2 << ", " << n - 3;
//    else
//       cout << 1 << ", " << 1 << ", " << n - 2;
// }
// int main(){
//    unordered_map<int,int>m;
//    for(int i=0;i<5;i++)
//    {
//       int x;
//       cin>>x;
//       m.insert({x,i});
//    }
// unordered_map<int,int>::iterator i;
//    for( i=m.begin();i!=m.end();i++)
//    {
//       cout<<i->first<<endl;
//    }
//    // solve(n);
  //  multiset<int>s;
  //   for(int i=0;i<5;i++)
  //   {
  //     int x;
  //     cin>>x;
  //     s.insert(x);
  //   }
  //   for (auto it=s.begin(); it!=s.end(); it++)
  //     cout <<*it;
 
int main()
{
 
    // Initialize container
    // map<int, int> m;
 
    // Insert elements in random order
    // m.insert({ 2, 30 });
    // m.insert({ 1, 40 });
    // m.insert({ 3, 40 });
    // m.insert({ 4, 50 });
    // for(auto i=m.begin();i!=m.end();i++)
    //  {
    //   cout<<i->first<<""<<i->second<<endl;
    //  }
    // int s1=3;
    //   if(m.find(s1)!=m.end()){
    //   //if the element is found before the end of the map
    //   auto b=m.find(s1);
    //   b->second=1;
    //   cout<<b->first<<endl;
      //if the element is present then you can access it using the index
    //  int a=3;
    //  float b=a/2;
    //  cout<<b<<endl;
    int a,b;
    cin>>a>>b;
    cout<<(a^b)<<endl;

  //   vector<int> v = {1,1,3,5,7,9,10};

  //  int c=1,x;
  //   for(int i=0;i<v.size();i++)
  //   {
  //     if(v[i]%2==0){
  //       x=v[i]/2;
  //       v.insert(v.begin()+i, 1, x);
  //     }
  //   }
  //  for (auto it = v.begin(); it != v.end(); ++it)
  //     cout << *it << endl;
     
    return 0;
}

