#include<stdio.h>
#include<string.h>
typedef struct employee{
char name[20];
int id_no;
float salary;
}emp;
int main()
{
  emp fb[100];
  fb[0].id_no=100;
  fb[0].salary=100.6;
  strcpy(fb[0].name,"Shreyas");

  fb[1].id_no=101;
  fb[1].salary=110.05;
  strcpy(fb[1].name,"Jakati");

  printf("%d\n",fb[0].id_no);
  printf("%s\n",fb[0].name);
  printf("%f\n",fb[0].salary);

  printf("%s\n",fb[1].name);


}
