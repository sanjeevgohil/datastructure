//Quick Sort

#include<stdio.h>
#include<conio.h>
void qsort(int a[],int,int);
void main()
{
	int i,f=0,l=9,a[10];
	clrscr();
	for(i=0;i<=9;i++)
	{
		printf("\nEnter Number :");
		scanf("%d",&a[i]);
	}

	qsort(a,f,l);

	printf("\nFinal Output :\n");
	for(i=0;i<=9;i++)
	{
		printf("\nNumber is : %d",a[i]);
	}
	getch();
}
void qsort(int a[],int f,int l)
{
	int temp,hi,lo,mid,i;
	hi = f;
	lo = l;
	mid = a[(f+l)/2];
	printf("\nFirst = %d and Last = %d",f,l);
	getch();
	while(hi <= lo)
	{
		while(a[hi] < mid)
		{
			hi++;
		}
		while(a[lo] > mid)
		{
			lo--;
		}
		if(hi <= lo)
		{
			temp = a[hi];
			a[hi] = a[lo];
			a[lo] = temp;
			hi++;
			lo--;
			printf("\nInterchange Output :\n");
			for(i=0;i<=9;i++)
			{
				printf("\nNumber is : %d",a[i]);
			}
			getch();
		}
	}
	if(f < lo)
	{
		qsort(a,f,lo);
	}
	if(hi < l)
	{
		qsort(a,hi,l);
	}
}