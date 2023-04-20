#include<stdio.h>
typedef struct{
    int roll_no;
    char name[50];
    struct subject{
    int scode;
    char sname[50];
    int mark;
    }sub[3];
    int total;
    float per;
}student;
int main()
{
}
