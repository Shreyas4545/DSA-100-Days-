#include<stdio.h>
int main()
{
    int n,rev=0,r;
    scanf("%d",&n);
    int original=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10 + r;
    }
    if(original==rev)
    {
      printf("it is palindrome\n");
    }
    else{
        printf("it is not palindrome\n");
    }
}
