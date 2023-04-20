#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'happyLadybugs' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING b as parameter.
 */

string happyLadybugs(string b) {
        map<char,int>m;
        bool space=false;
        bool flag1=false;
        if(b.size()==1 && b[0]=='_')
        {
            return "YES";
        }
        if(b.size()==1 && b[0]!='_')
        {
            return "NO";
        }
        for(int i=0;i<b.size();i++)
        {
            m[b[i]]++;
            if(b[i]=='_')
            {
                space=true;
            }
            if(i!=0){
            if(b[i]!=b[i-1] || b[i]!=b[i+1])
            {
                flag1=true;
            }
            }
        }
        bool count=false;
        m.erase('_');
        for(auto i:m)
        {
            if(i.second==1)
            {
                    count=true;
                    break;
            }
        }
        if(count)
        {
            return "NO";
        }
        if(!space && flag1)
        {
            return "NO";
        }
        return "YES";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            int n;
            cin>>n;
            string a;
            cin>>a;
            string b=happyLadybugs(a);
            cout<<b<<endl;
    }
    return 0;
}
