#include<bits/stdc++.h>
using namespace std;
 string reverseWords(string s) {
           int n=s.size();
           int j=n-1,k=0;
           reverse(s.begin(),s.end());
           string x;
           while(s[j]==' ')
           {
               j--;
           }
           while(s[k]==' ')
           {
               k++;
           }
           int l=k;
           bool flag=false;
           while(l<=j)
           {
               string help="";
               flag=false;
              while(s[l]!=' ' && l<=j)
              {
                  flag=true;
                  help+=s[l];
                  l++;
              }
              if(s[l]==' ' && !flag)
              {
                help+=s[l];
              }
              if(!flag){
              l++;
              }
              reverse(help.begin(),help.end());
              x.append(help);
           }
           return x;
    }
int main()
{
    string a=" Good Morning ! Keep on grinding you will reach there one day !   ";
    cout<<reverseWords(a);
}