#include<stdio.h>
#include<string.h>
struct employee{
int code;
float salary;
char name[10];
};
int main()
{
    struct employee sonu ={100,2000.54,"Sonu"};
    printf("%d\n",sonu.code);
    printf("%.3f\n",sonu.salary);
    printf("%s\n",sonu.name);
    return 0;
}
