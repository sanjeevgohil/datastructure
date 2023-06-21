//bubble sort
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[5],swap;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("\n Value is :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{      
			if(a[j]>a[j+1])
			{
				swap=a[j];         // c = a
				a[j]=a[j+1];       // a = b
				a[j+1]=swap;       // b = c
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\n Value is : %d",a[i]);
	}
	getch();
}