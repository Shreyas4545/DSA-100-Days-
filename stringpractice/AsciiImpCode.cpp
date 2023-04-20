#include <bits/stdc++.h>

using namespace std;
int main()
{
string s;
cin>>s;
int k=98;
 string a="abcdefghijklmnopqrstuvwxyz";
       for(int i=0;i<s.size();i++)
       {
           if(a.find(s[i])!=string::npos || isupper(s[i])){
           if(s[i]=='-')
           {
               s[i]='-';
              continue;
           }
           if(islower(s[i])){
           int a=int(s[i])+k;
           if(a>122)
           {
            if(k<=26){
               int b=a-122;
               s[i]=char(97+b-1);
            }
            else{
                int val=k%26;
                int val1=int(s[i])+val;
                if(val1>122)
                {
                    int val2=val1-122;
                    s[i]=char(97+val2-1);
                }
                else{
                    s[i]=char(val1);
                }
            }
           }
           else{
           s[i]=char(a);
           }
           }
           else if(isupper(s[i]))
           {
               int g=int(s[i])+k;
               if(g>90)
               {
                if(k<=26){
            
                   int f=g-90;
                   s[i]=char(65+f-1);
                }
                else{
                    int val=k%26;
                int val1=int(s[i])+val;
                if(val1>90)
                {
                    int val2=val1-90;
                    s[i]=char(65+val2-1);
                }
                else{
                    s[i]=char(val1);
                }
                }
               }
               else{
                   s[i]=char(g);
               }
           }
       }
       }
       cout<<s<<endl;
}
