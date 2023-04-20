#include<stdio.h>
#include<string.h>
struct employee{
int code;
float salary;
char name[10];
};
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    ptr->code=100;
    ptr->salary=15000;
    strcpy(ptr->name,"sonu");
    printf("%d\n",(*ptr).code);
    printf("%f\n",e1.salary);
}
