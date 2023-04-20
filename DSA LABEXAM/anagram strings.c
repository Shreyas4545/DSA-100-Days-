#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="decimal";
    char str1[]="medical";
    int H[26]={0},i;
    for(int i=0;str[i]!='\0';i++)
    {
        H[str[i]-97]+=1;
    }
    for(int i=0;str1[i]!='\0';i++)
    {
        H[str[i]-97]-=1;
        if(H[str[i]-97]<0)
        {
            printf("not anagram\n");
            break;
        }
    }
    if(str1[i]=='\0')
    {
        printf("anagram\n");
    }return 0;
}
