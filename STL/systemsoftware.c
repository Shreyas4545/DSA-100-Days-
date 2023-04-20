#include<stdio.h>
#include<stdlib.h>
// int main()
// {
//     int feet,inch,f1,i1;
//     printf("Enter the feet and inches of first one : ");
//     scanf("%d %d",&feet,&inch);
//     printf("Enter the feet and inches of second one : ");
//         scanf("%d %d",&f1,&i1);
//     int z=feet+f1;
//     int x=inch+i1;
//     if(x>12)
//     {
//         z=z+1;
//         x=x-12;
//     }
//     printf("Feet: %d Inches: %d",z,x);
// }

// 2nd


// struct student
// {
// 	char name[30];
// 	int rollno;
// 	int sub[3];
// 	int total;
// };

// int main()
// {
// 	int i, n, j;
// 	struct student st[20], temp;
// 	printf("Enter number of students data you want to enter:\n");
// 	scanf("%d",&n);
// 	for(i=0;i < n;i++)
// 	{
// 		printf("Enter name of student %d\n",(i+1));
// 		scanf("%s",&st[i].name);
// 		printf("Enter Roll No of student %d\n",(i+1));
// 		scanf("%d",&st[i].rollno);
// 		printf("Enter marks for 3 subjects of student %d\n",(i+1));
// 		scanf("%d%d%d",&st[i].sub[0],&st[i].sub[1],&st[i].sub[2]);
// 		st[i].total = (st[i].sub[0]+st[i].sub[1]+st[i].sub[2]);
// 		printf("Total Marks of %d student = %d\n",(i+1), st[i].total);
// 	}
  
// 	for(i=0; i < n;i++)
// 	{
// 		printf("\nName of student: %s",st[i].name);
// 		printf("\nRoll No of student: %d",st[i].rollno);
// 		printf("\nTotal of student: %d\n",st[i].total);
// 	}
// }

// 3rd 

// typedef struct book
// {
//     char title[10];
//     char author[20];
//     int id;
//     char subject[30];
// }b;

// int main()
// {
//     b book;
//     scanf("%s%s%s%d",&book.title,&book.author,&book.subject,&book.id);
//     printf("%s",book.title);
//     printf("%s",book.author);
//     printf("%d",book.id);
//     printf("%s",book.subject);
// }
// #include <stdio.h>
// int main() {
// 	char name[50];
// 	int marks,i,n;
// 	printf("Enter number of students: ");
// 	scanf("%d",&n);
// 	FILE *fptr;
// 	fptr=(fopen("C:\\student.txt","w"));
// 	if(fptr==NULL) {
// 		printf("Error!");
// 		exit(1);
// 	}
// 	for (i=0;i<n;++i) {
// 		printf("For student%d\nEnter name: ",i+1);
// 		scanf("%s",name);
// 		printf("Enter marks: ");
// 		scanf("%d",&marks);
// 		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
// 	}
// 	fclose(fptr);
// 	return 0;
// }

// #define filename "student.txt"
// int main()
// {
//     char c;
//     FILE*fp;
//     int count=0;
//     fp=fopen(filename,"r");
//     if(fp==NULL)
//     {
//         printf("Error");
//         return 0;
//     }
//     for(c=getc(fp);c!=EOF;c=getc(fp))
//     {
//          if (c == '\n')
//             count = count + 1;
//     }
//     fclose(fp);
//     printf("%d lines",count);
// }


#include <stdio.h>

void copy(FILE *fp1,FILE *fp2){
    char ch[100];
    while(!feof(fp1)){
        fgets(ch,100,fp1);
        fputs(ch,fp2);
    }
}

int main(){
    FILE* fp1 = fopen("data1.txt","r");
    FILE* fp2 = fopen("data2.txt","w");
    copy(fp1,fp2);
    printf("Data successfully trasnfered from data1.txt to data2.txt\n");
    return 0;
}