#include<stdio.h>
#include<conio.h>
#define size 10

int f = -1,r = -1;
int queue[size];

void fpush(int);
void rpush(int);
void fpop();
void rpop();
void peep();

void main()
{
	int no,ch;
	while(1)
	{
		clrscr();
		printf("\t\t\n:: DdQUEUE APPLICATION ::\n");
		printf("\n1. Front Push ");
		printf("\n2. Rear Push");
		printf("\n3. Front Pop ");
		printf("\n4. Rear Pop");
		printf("\n5. Peep ");
		printf("\n6. Exit ");
		printf("\nEnter Choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter Number :");
				scanf("%d",&no);
				fpush(no);
				break;
			case 2:
				printf("\nEnter Number :");
				scanf("%d",&no);
				rpush(no);
				break;
			case 3:
				fpop();
				break;
			case 4:
				rpop();
				break;
			case 5:
				peep();
				break;
			case 6:
				goto END;
			default:
				printf("\nWrong Choice...");
				getch();
		}
	}
	END:
	printf("\nGood Bye... ");
	getch();
}
void fpush(int no)
{
	if(f == 0)
	{
		printf("\nQueue is Overflow...");
	}
	else
	{
		if(f == -1)
		{
			f=0;
			r=0;
		}
		else
		{
			f--;
		}
		queue[f] = no;
		printf("\nElement Inserted Front...");
	}
	getch();
}
void rpush(int no)
{
	if(r==size-1)
	{
		printf("\nQueue is Overflow");
	}
	else
	{
		if(f==-1)
		{
			f++;
		}
		r++;
		queue[r]=no;
		printf("Element Inserted rear..");
	}
	getch();
}
void fpop()
{
	if(f==-1)
	{
		printf("Queue is Empty...");
	}
	else
	{
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
		{
			f++;
		}
		printf("\nElements Removed from first..");
	}
	getch();
}
void rpop()
{
	if(r==-1)
	{
		printf("Queue is Empty..");
	}
	else
	{
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
		{
			r--;
		}
		printf("Element Removed From Rear...");
	}
	getch();
}
void peep(void)
{
	int i;
	if(f == -1)
	{
		printf("\nQueue is Empty...");
	}
	else
	{
		for(i = f;i<=r;i++)
		{
			printf(" %d",queue[i]);
		}
	}
	getch();
}
