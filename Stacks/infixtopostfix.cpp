#include<bits/stdc++.h>
using namespace std;
int precedence(char b)
{
    if(b=='^')
    {
        return 3;
    }
    else if(b=='*' || b=='/')
    {
        return 2;
    }
    else if(b=='+' || b=='-')
    {
        return 1;
    }
    else{
        return -1;
    }
}
string infixtopostfix(string s)
{
    stack<char>st;
    string a;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            a+=s[i];
        }
        else if(s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')'){
         while(!st.empty() && st.top()!='(')
         {
              a+=st.top();
              st.pop();
         }
        if(!st.empty())
        {
            st.pop();
        }
        }
        else{
            while(!st.empty() && precedence(st.top())>=precedence(s[i]))
            {
                a+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        a+=st.top();
        st.pop();
    }
    return a;
}
int main()
{
    cout<<infixtopostfix("(a-b/c)*(a/k-l)");
    return 0;
}
 

