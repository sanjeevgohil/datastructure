#include<stdio.h>
#include<conio.h>
#define size 10

int stack[size],tos=-1;

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
		printf("\n2.Delete");
		printf("\n3.Display");
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
	if(tos==size-1)
	{
		printf("Stake is OverFlow");
	}
	else
	{
		tos++;
		stack[tos] = no;
		printf("Number is Inserted");
	}

	getch();
}
void pop()
{
	if(tos==-1)
	{
		printf("Stake is Empty");
	}
	else
	{
		printf("Element Removed..");
		tos--;

	}
	getch();
}
void peep()
{
	int i;
	if(tos==-1)
	{
		printf("Stake is Empty..");
	}
	else
	{
		printf("\n");
		for(i=0;i<=tos;i++)
		{
			printf("%d->",stack[i]);
		}
	}
	getch();
}
