#include<bits/stdc++.h>
using namespace std;
stack<char>st;
void insert_at_bottom(char x)
{
    if(st.size()==0)
    {
        st.push(x);
    }
    else{
        char a=st.top();
        st.pop();
        insert_at_bottom(x);
        st.push(a);
    }
}
void reverse()
{
    if(st.size()>0)
    {
        char a=st.top();
        st.pop();
        reverse();
        insert_at_bottom(a);
    }
}
int main()
{
    string ns;
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');
    reverse();
    while(!st.empty())
    {
    char a=st.top();
    st.pop();
    ns+=a;
    }
    for(int i=ns.size()-1;i>=0;i--)
    {
        cout<<ns[i]<<endl;
    }

        return 0;
}