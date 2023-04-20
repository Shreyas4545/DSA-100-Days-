#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	vector<int>v;
	string s;
	cin>>s;
	int n=s.size();
	int count=0,count1=0;
	string a="frieza";
	for(int i=0;i<s.size();i++)
    {
        if(a.find(s[i])!=string::npos)
        {
            count++;
            if(count1!=0){
            v.push_back(count1);
            }
            count1=0;
        }
        else if(a.find(s[i])==string::npos)
        {
            count1++;
            if(count!=0){
            v.push_back(count);
            }
            count=0;
        }
        if(i==n-1)
        {
            if(count!=0)
            {
                v.push_back(count);
            }
            else if(count1!=0)
            {
                v.push_back(count1);
            }
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    cout<<endl;
	}
	return 0;
}
