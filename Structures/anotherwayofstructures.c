#include<stdio.h>
#include<string.h>
typedef struct employee
{
int code;
float salary;
char name[10];
}emp;
int main()
{
    emp facebook={100,10000,"Sonu"};
    emp facebook1={101,100001,"Shreyas"};

    printf("%d\n",facebook.code);
    printf("%f\n",facebook.salary);
    printf("%s\n",facebook.name);

    printf("%d\n",facebook1.code);



    return 0;
}
