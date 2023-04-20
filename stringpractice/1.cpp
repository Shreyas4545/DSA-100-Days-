
#include<bits/stdc++.h>
using namespace std;
void shreyas(string s)
{
    int t;
    cin>>t;
  map<string,int>m;
  string word="";
  for(int i=0;i<s.size();i++)
  {
    if(s[i]==',')
    {
        if(m.find(word)==m.end())
        {
            m.insert(make_pair(word,1));
            word="";
        }
        else{
            m[word]++;
            word="";
        }
    }
    else{
        word+=s[i];
    }
  }
    if(m.find(word)==m.end())
    {
        m.insert(make_pair(word,1));

    }
    else{
        m[word]++;
    }

  priority_queue<pair<int,string>>p;
  for(auto &i:m)
  {
   p.push(make_pair(i.second,i.first));
  }
  int n=p.size()-t;
  vector<string>v;
  while(p.size()!=n)
  {
    v.push_back(p.top().second);
    p.pop();
  }
  sort(v.begin(),v.end());
  for(auto i:v)
  {
    cout<<i<<endl;
  }

}
int main()
{
    string s;
    cin>>s;
    shreyas(s);
}
