#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    multiset<int>s;
    int n,sum=0,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    for(int i=0;i<k;i++)
    {
       auto it=(--s.end());
       int y=*it;
       sum=sum+y;
       s.erase(y);
       s.insert(y/2);
    }
    cout<<sum<<endl;
	return 0;
}
