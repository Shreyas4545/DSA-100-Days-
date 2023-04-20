#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string a;
    getline(cin,a);
    a.erase(remove_if(a.begin(),a.end(),::isspace),a.end());
    int x=a.size();
    int n;
    cin>>n;
    int count=0;
    string z=a;
    while(n--)
    {
        string b;
        cin>>b;
        z=a;
        if(b=="request")
        {
            count++;
        }
        else if(b=="cancel")
        {
            if(count>0)
                count--;
        }
        else if(b=="print")
        {
            string x=to_string(count);
            z.append(x);
            cout<<z<<endl;
        }
    }
    return 0;
}
