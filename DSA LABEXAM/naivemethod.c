#include<stdio.h>
#include<stdlib.h>
void naive(char *pat,char *text)
{
    int n=strlen(text);
    int m=strlen(pat);
    int j;
    for(int i=0;i<=n-m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(text[i+j]!=pat[j])
            {
                break;
            }
        }
     if(j==m)
     {
         printf("%d ",i);
     }
    }
}


int main()
{
    char text[50];
    char pat[50];
    printf("enter the text\n");
    gets(text);
    printf("enter the pattern\n");
    gets(pat);
    naive(pat,text);

}
