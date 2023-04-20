
//First function (Reverse ) just pops the presently top element of stack and so on popping we reach the last of stack , now while returning we insert each element at the bottom of stack using another function (InsertAtBottom) ,
//what insert at bottom does is that it again goes on storing and poping present element and calling itself , like this when we reach at the end of stack then we add our element there as base condition and while returning accumulate all previous elements and thus add at bottom happens.
#include<bits/stdc++.h>
using namespace std;
void insert_at_bottom(stack<int>st,int x)
{
    if(st.size()==0)
    {
        st.push(x);
    }
    else{
        int a=st.top();
        st.pop();
        insert_at_bottom(st,x);
        st.push(a);
    }
}
void reverse(stack<int>s)
{
    if(s.size()>0)
    {
        int a=s.top();
        s.pop();
        reverse(s);
        insert_at_bottom(s,a);

    }
    return;
}
int main()
{
    stack<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        s.push(i);
    }
    reverse(s);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}