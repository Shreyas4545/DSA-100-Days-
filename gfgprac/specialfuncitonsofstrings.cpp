#include<iostream>
#include<cstring>
using namespace std;
int main()
{

    char str1[20]="235";
    char str2[30]="54.38";
    long int x=strtol(str1,NULL,10);
    float y=strtof(str2,NULL);
    cout<<x<<endl<<y<<endl;
    return 0;
}
