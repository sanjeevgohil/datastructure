//Marge Sort
#include<stdio.h>
#include<conio.h>
#define size 8
void msort(int [],int,int);               //prototype
void margesort(int [],int,int,int,int);   //prototype
void main()
{
	int a[size],i;
	clrscr();
	for(i=0;i<=size-1;i++)
	{


		printf("\nEnter Number :");
		scanf("%d",&a[i]);
	}

	msort(a,0,size-1);     //calling

	printf("\nSorted Output \n");
	for(i=0;i<=size-1;i++)
	{
		printf("\nNumber is :%d",a[i]);
	}
	getch();
}
void msort(int a[],int f,int l)
{
	int mid;
	if(f<l)
	{
		mid = (f+l)/2;
		msort(a,f,mid);
		msort(a,mid+1,l);
		margesort(a,f,mid,mid+1,l); //calling
	}
}

void margesort(int a[],int f,int mid,int mid1,int l)
{
	int temp[size];   //temp[5]
	int i,j,k;
	i = f;             //  i = first value
	j = mid1;          // j = 2nd part first value
	k=0;
    //	printf("\nF = %d , Mid = %d , Mid1 = %d , L = %d ",f,mid,mid1,l);
    //	getch();
	while(i<=mid && j<=l)
	{
		if(a[i] < a[j])
		{
			temp[k]=a[i];
			k++;
			i++;
		}
		else
		{
			temp[k]=a[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
	while(j<=l)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
      //	printf("\n");
	for(i=f,j=0;i<=l;i++,j++)
	{
		a[i] = temp[j];
		printf(" %d ",temp[j]);
	}
	getch();
}
