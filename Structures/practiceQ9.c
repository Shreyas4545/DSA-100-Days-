#include<stdio.h>
typedef struct dateformat
{
    int day;
    int month;
    int year;
}date;
void display(date d1,date d2)
{
    printf("%d %d %d\n",d1.day,d1.month,d1.year);
    printf("%d %d %d\n",d2.day,d2.month,d2.year);
}

int compare(date d3,date d4)
{
    if(d3.year>d4.year)
    {
        return -1;
    }
    else if(d3.year<d4.year)
    {
        return 1;
    }
    else if(d3.month>d4.month)
    {
        return -1;
    }
    else if(d3.month<d4.month)
    {
        return 1;
    }
    else if(d3.day>d4.day)
    {
        return -1;
    }
    else if(d3.day<d4.day)
    {
        return 1;
    }
}
int main()
{
    date d1={5,03,2002};
    date d2={2,04,2002};
    date d3={14,12,2004};
    date d4={13,12,2004};
    display(d1,d2);
    int a=compare(d3,d4);
    printf("%d",a);
    return 0;

}
