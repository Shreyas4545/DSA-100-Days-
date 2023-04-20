#include<bits/stdc++.h>
using namespace std;
int main(){
    string chars="abc";
    string s="abc";
    vector<int>vals={-1,-1,-1};
 unordered_map<char,int>m;
        string alp="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<alp.size();i++)
        {
            m.insert({alp[i],i+1});
        }
        unordered_map<char,int>m1;
        for(int i=0;i<chars.size();i++)
        {
            m1.insert({chars[i],i});
        }
        vector<int>v;
        for(int i=0;i<s.size();i++)
        {
            int sum=0,index=0;
            if(m1.find(s[i])!=m1.end())
            {
                index=m1[s[i]];
                sum+=vals[index];
            }
            else{
                sum+=m[s[i]];
            }
            v.push_back(sum);
            for(int j=i+1;j<s.size();j++)
            {
                if(m1.find(s[j])!=m1.end())
            {
                index=m1[s[j]];
                sum+=vals[index];
            }
            else{
                sum+=m[s[j]];
            }
            if(sum<0)
            {
                break;
            }
            v.push_back(sum);
            }
            cout<<sum<<" "<<endl;
        }
        int ans=*max_element(v.begin(),v.end());
        if(ans<=0)
        {
            cout<<0<<endl;
        }
        else{
        cout<<ans<<endl;
        }
}