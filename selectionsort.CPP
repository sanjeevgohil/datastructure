#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,temp,a[10];
	clrscr();
	for(i=0;i<=9;i++)
	{
		printf("\n Enter no.");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<=9;i++)
	{
		printf("\n No is :%d",a[i]);
	}
	getch();
}







