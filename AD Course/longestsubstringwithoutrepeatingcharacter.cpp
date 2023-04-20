#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>v(256,-1);
    int start=-1,maxlen=0;
    for(int i=0;i<s.size();i++)
    {
        if(v[s[i]]>start){
            start=v[s[i]];
        }
      v[s[i]]=i;
      maxlen=max(maxlen,i-start);
    }
    cout<<maxlen<<endl;
    return 0;
}