#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
   /*) string str="abcdefgh";
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }
    cout<<str;
    string str="ABCDEFGH";
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    cout<<str;
    string str="abcdefgh";
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str;
    return 0;*/
    //form max number
    /*string s="1234567";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;*/
    string s="abcabcdef";
    string s="abcabcdef";
    int freq[26]={0};
    for(int i=0;i<s.size();i++)
    {
        freq[s[i]-'a']++;
    }
    for(int i=0;i<s.size();i++)
    {
        if(freq[i])
    }
}

