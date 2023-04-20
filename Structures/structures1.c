#include<stdio.h>
#include<string.h>
struct student{
float marks;
int roll_no;
int subject;
char name[50];
};
struct student s1,s2,s3;
int main()
{

  s1.marks=50.50;
  s1.roll_no=34;
  s1.subject=4570;

  strcpy(s1.name,"Shreyas Jakati");
  printf("%f\n %d\n %d\n %s\n",s1.marks,s1.roll_no,s1.subject,s1.name);
  return 0;


}
