//structure with udf(no return with argument)
#include<stdio.h>
#include<conio.h>
struct stud
{
	int rno;
	char nm[50];
}s;
void sdata(struct stud s);   //prototype
void main()
{
	clrscr();
	printf("\nEnter Roll No:");
	scanf("%d",&s.rno);
	printf("Enter Name:");
	scanf("%s",&s.nm);

	sdata(s); //calling

}
void sdata(struct stud s)
{
	printf("\nYour Roll No is:%d",s.rno);
	printf("\nYour name is:%s",s.nm);
	getch();
}