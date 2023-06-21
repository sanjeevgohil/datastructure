// Note Convert it into C Plus Plus OOP Program
#include<stdio.h>
#include<conio.h>
#define size 10

int f = -1,r = -1;
int queue[size];

void push(int);
void pop(void);
void peep(void);
void main()
{
	int no,ch;
	while(1)
	{
		clrscr();
		printf("\t\t\n:: CQUEUE APPLICATION ::\n");
		printf("\n1. Push ");
		printf("\n2. Pop ");
		printf("\n3. Peep ");
		printf("\n4. Exit ");
		printf("\nEnter Choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter Number :");
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
void push(int no)
{
	if(r == size-1)
	{
		if(f == 0)
		{
			printf("\nQueue is Overflow...");
		}
		r = 0;
		queue[r] = no;
	}
	else
	{
		if(f == -1)
		{
			f++;
		}
		r++;
		queue[r] = no;
		printf("\nElement Inserted...");
	}
	getch();
}
void pop(void)
{
	if(f == -1)
	{
		printf("\nQueue is Empty...");
	}
	else
	{
		if(f == r)
		{
			f=-1;
			r=-1;
		}
		else if(f == size-1)
		{
			f = 0;
		}
		else
		{
			f++;
		}
		printf("\nElement Remove...");
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
		if(f <= r)
		{
			for(i=f;i<=r;i++)
			{
				printf(" %d -> ",queue[i]);
			}
		}
		else
		{
			for(i=f;i<=size-1;i++)
			{
				printf(" %d -> ",queue[i]);
			}
			for(i=0;i<=r;i++)
			{
				printf(" %d -> ",queue[i]);
			}
		}

	}
	getch();
}

































