#include<bits/stdc++.h>
using namespace std;
void reverseastring(string s)
{
    stack<string>st;
    for(int i=0;i<s.length();i++)
    {
        string word=" ";
      while(s[i]!=' ' && i<s.length())
      {
          word+=s[i];
          i++;
      }
      st.push(word);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
void reverseaword(string b)
{
    stack<char>tp;
    for(int i=0;i<b.length();i++)
    {
        string word=" ";
        word+=b[i];
        tp.push(word);
    }
    while(!tp.empty())
    {
        cout<<tp.top()<<" ";
        tp.pop();
    }
}
int main()
{
    //string a={"Hello, I am Shreyas"};
    //reverseastring(a);
    reverseaword("Shreyas");
    return 0;
}
