#include<stdio.h>
#include<string.h>
 typedef struct student{
char name[50];
int roll_no;
}std;
int main()
{
   std s1;
   strcpy(s1.name,"Shreyas Jakati");
   s1.roll_no=50;
   printf("%s\n %d\n",s1.name,s1.roll_no);
}
