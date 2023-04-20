#include<bits/stdc++.h>
using namespace std;
bool check(string a,string b)
{
    if(a.size()!=b.size())
    {
        return false;
    }
    queue<char>q;
    for(int i=0;i<a.size();i++)
    {
        q.push(a[i]);
    }
    queue<char>q2;
    for(int i=0;i<b.size();i++)
    {
        q2.push(b[i]);
    }
    int k=b.size();
    while(k--)
    {
        char ch=q2.front();
        q2.pop();
        q2.push(ch);
        if(q2==q)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string a="ABCD";
    string b="CDBA";
    if(check(a,b))
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;

}
