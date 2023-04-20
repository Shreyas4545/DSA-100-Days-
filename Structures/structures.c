#include<stdio.h>
#include<string.h>
struct employee{
int idno;
char name[10];
float salary;
};
int main()
{
    struct employee e1,e2;
    printf("enter the code of first employee\n");
    scanf("%d",&e1.idno);
    printf("enter the salary of first employee\n");
    scanf("%f",&e1.salary);
    printf("enter the name of first employee\n");
    scanf("%s",e1.name);
}
