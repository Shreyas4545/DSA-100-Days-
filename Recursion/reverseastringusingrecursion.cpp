#include<iostream>
using namespace std;
void reversestring(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string a=s.substr(1);
    reversestring(a);
    cout<<s[0];

}
int main()
{
    reversestring("binod");
    return 0;
}
