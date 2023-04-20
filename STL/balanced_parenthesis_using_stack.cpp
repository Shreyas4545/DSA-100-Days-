#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int>m={{'[',-3},{'{',-2},{'(',-1},{')',1},{'}',2},{']',3}};
string balanced(string s)
{
    stack<char>a;
    for(auto b:s)
    {
        if(m[b]<0)
        {
            a.push(b);
        }
        else{
            if(a.empty())
            {
                return "No";
            }
            char t=a.top();
            a.pop();
            if(m[t]+m[b]!=0)
            {
                return "No";
            }
        }
    }
    if(!a.empty())
    {
        return "No";

    }
    else{
        return "Yes";
    }

}
int main()
{
    string s="[{()}]";
    cout<<balanced(s)<<endl;
    return 0;
}
