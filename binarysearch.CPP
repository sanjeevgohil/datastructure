//binary search
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,temp,s,f,l,mid,flag=0;
	clrscr();
	for(i=0;i<=4;i++)
	{
		printf("Enter Value is:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i=0;i<=4;i++)
	{
		printf("\nValue is :%d",a[i]);
	}

	printf("\nEnter Searching Elments:");
	scanf("%d",&s);

	f=0;
	l=4;

	while(f <= l)
	{
		mid = (f+l)/2;
		if(a[mid] < s)
		{
			f = mid+1;
		}
		else if(a[mid] > s)
		{
			l = mid-1;
		}
		else
		{
			printf("Elements Found..");
			flag = 1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Elements not Found..");
	}
	getch();
}