#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;
	    cin>>n;
	    map<int,int,greater<int>>m;
	    for(int i=0;i<n;i++)
	    {
	        int a,b;
	        cin>>a>>b;
	        if(m.find(a)!=m.end())
	        {
	            if(m[a]<b)
	            {
	                m[a]=b;
	            }
	            else{
	                continue;
	            }
	        }
	        else{
	            if(a<9){
	                m.insert({a,b});
	            }
	            
	        }
	    }
	    if(m.size()==0)
	    {
	        cout<<0<<endl;
	    }
	    else{
	        for(auto i:m)
	        {
	            count+=i.second;
	        }
	        cout<<count<<endl;
	    }
	    
	}
	return 0;
}
