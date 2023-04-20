#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    map<int,int>m;
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        m[v[i]]++;
	    }
	    int count=0;
	   vector<pair<int,int>>v1(n);
	   std::map<int,int>::iterator i;
	   for( i=m.begin();i!=m.end();i++)
	   {
	       v1.push_back(make_pair(i->first,i->second));
	   }
	   sort(v1.begin(),v1.end(),greater<>());
       for(int i =0;i<v1.size();i++)
    {
        cout<<"("<<v1[i].first<<","<<v1[i].second<<")"<<" ";
    }
	   for(int i=1;i<v1.size();i++){
	       count+=v1[i].second;
	   }
        cout<<count<<endl;
	}
	return 0;
}
