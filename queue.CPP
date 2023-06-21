#include<stdio.h>
#include<conio.h>
#define size 10

int queue[size],f=-1,r=-1;

void push(int);
void pop();
void peep();

void main()
{
	int ch,no;
	clrscr();
	while(1)
	{
		clrscr();
		printf("::::Stake Opration::::");
		printf("\n1.Insert");
		printf("\n2.Dispaly");
		printf("\n3.Delete");
		printf("\n4.Exit");
		printf("\nEnter Your Choice::");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter Number ::");
				scanf("%d",&no);
				push(no);
				break;
			case 2:
				pop();
				break;
			case 3:
				peep();
				break;
			case 4:
				printf("good bye..");
				goto END;
			default:
				printf("Wrong...Choice...");
		}
	}
	END:
	getch();
}
void push(int no)
{
	if(r==size-1)
	{
		printf("Queue is OverFlow");
	}
	else
	{
		if(f==-1)
		{
			f++;
		}
		r++;
		queue[r] = no;
		printf("Number is Inserted");
	}
	peep();
	getch();
}
void pop()
{
	if(r==-1)
	{
		printf("Queue is Empty");
	}
	else if(f==r)
	{
		f=-1;
		r=-1;
	}
	else
	{
		f++;
		printf("Element Removed..");
		peep();
	}
	getch();
}
void peep()
{
	int i;
	if(r==-1)
	{
		printf("Queue is Empty..");
	}
	else
	{
		printf("\n");
		for(i=f;i<=r;i++)
		{
			printf("%d->",queue[i]);
		}
	}
	getch();
}
