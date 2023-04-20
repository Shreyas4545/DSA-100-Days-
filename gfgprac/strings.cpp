#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[50]="hello";
    char str[20]="h";

    if(strstr(str1,str)!=0)
        cout<<strstr(str1,str)<<endl;
    else
        cout<<"NULL";
}

