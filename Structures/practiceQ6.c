#include<stdio.h>
#include<string.h>
typedef struct complex{
int real;
int complex;
}comp;
int display(comp nums[],comp real,comp complex)
{
    for(int i=0;i<5;i++)
    {
        printf("%d\n and %d\n",nums[i].real,nums[i].complex);
    }
}
int main()
{
    comp nums[5],real,complex;
    for(int i=0;i<5;i++)
    {
        scanf("%d %d",&nums[i].real,&nums[i].complex);
    }
    display(nums,real,complex);
    return 0;

}
