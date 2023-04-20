#include<stdio.h>
void swap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void perm(char str[],int l,int h)
{
    int i,n;

    if(l==h)
    {
        printf("%s\n",str);
    }
    else{
        for(i=l;i<=h;i++)
        {
            swap(&str[l],&str[i]);
            perm(str,l+1,h);
            swap(&str[l],&str[i]);
        }
    }
}
int main()
{
    char str[]="ABC";
    int n=strlen(str);
    perm(str,0,n-1);
    return 0;
}
