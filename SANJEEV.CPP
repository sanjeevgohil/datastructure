#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,s;

	for(i=10;i>=2;i=i-2)
	{
		for(j=1;j<=i;j++)
		{
				printf("%3d",i);
		}
		for(s=i;s<10;s++)
		{
			printf("      ");
		}
		for(j=1;j<=i;j++)
		{
				printf("%3d",i);
		}
		printf("\n\n");
	}
	for(i=2;i<=10;i=i+2)
	{
		for(j=1;j<=i;j++)
		{
				printf("%3d",i);
		}
		for(s=i;s<10;s++)
		{
			printf("      ");
		}
		for(j=1;j<=i;j++)
		{
				printf("%3d",i);
		}
		printf("\n\n");
	}
	getch();

}