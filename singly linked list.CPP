#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0

struct node
{
	int data;
	struct node *link;
};

struct node *p = NULL;

void create(int);
void addbeg(int);
void addbet(int,int);
void display(void);
void delfirst(void);
int dellast(void);
int delnode(int); // value
void sort(void);
void search(int);
void reverse(void);

void main()
{
	int ch,no,pos,flag;
	while(1)
	{
		START:
		clrscr();
		printf("\n\tSingly Link List \n");
		printf("\n1.	Add Node");
		printf("\n2.	Display Node");
		printf("\n3.	Delete Node");
		printf("\n4.	Search");
		printf("\n5. 	Sorting");
		printf("\n6.	Reverse");
		printf("\n0.	Exit");
		printf("\n\n\tEnter Your Choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				//Add Node switch case
				while(1)
				{
					clrscr();
					printf("\n\tAdd Node in Singly Link List \n");
					printf("\n1.	Create - Default End");
					printf("\n2.	Add Begning");
					printf("\n3.	Add Between");
					printf("\n0.	GoTo Main");
					printf("\n\n\tEnter Your Choice :");
					scanf("%d",&ch);
					switch(ch)
					{
						case 1:
							printf("\nEnter Number :");
							scanf("%d",&no);
							create(no);
							break;
						case 2:
							printf("\nEnter First Node Number :");
							scanf("%d",&no);
							addbeg(no);
							break;
						case 3:
							printf("\nEnter Between Node Number :");
							scanf("%d",&no);
							printf("\nEnter Position :");
							scanf("%d",&pos);
							addbet(no,pos);
							break;
						case 0:
							goto START;
						default:
							printf("\nWrong Choice ...  Try Again");
							getch();
					}
				}
			case 2:
				printf("\nNode Display :\n");
				display();
				break;
			case 3:
				//Delete Node switch case
				while(1)
				{
					clrscr();
					printf("\n\tDelete Node in Singly Link List \n");
					printf("\n1.	Delete First");
					printf("\n2.	Delete");
					printf("\n3.	Delete Last");
					printf("\n0.	GoTo Main");
					printf("\n\n\tEnter Your Choice :");
					scanf("%d",&ch);
					switch(ch)
					{
						case 1:
							delfirst();
							break;
						case 2:
							printf("\nEnter Number to Delete :");
							scanf("%d",&no);
							flag = delnode(no);
							if(flag == 0)
							{
								printf("\nNumber Not Found in List");
							}
							else
							{
								printf("\nNode Deleted...");
							}
							getch();
							break;
						case 3:
							flag = dellast();
							if(flag == 0)
							{
								printf("\nLink List is Empty...");
							}
							else
							{
								printf("\nNode Deleted...");
							}
							getch();
							break;
						case 0:
							goto START;
						default:
							printf("\nWrong Choice ...  Try Again");
							getch();
					}
				}
			case 4:
				//printf("\nEnter Number :");
				//scanf("%d",&no);
				//search(no);
				break;
			case 5:
				//sort();
				break;
			case 6:
				//reverse();
				break;
			case 0:
				printf("\nGood Bye...");
				getch();
				goto END;
			default:
				printf("\nWrong Choice ...  Try Again");
				getch();
		}
	}
	END:
}
//To create regular node
void create(int no)
{
	struct node *q;
	q = p;
	if(q == NULL)
	{
		p = (struct node*) malloc(sizeof(struct node));
		p->data = no;
		p->link = NULL;
	}
	else
	{
		while(q->link != NULL)
		{
			q = q->link;
		}
		q->link = (struct node*) malloc(sizeof(struct node));
		q->link->data = no;
		q->link->link = NULL;
	}
	printf("\nNode Created... ");
	getch();
}
//Create First Node
void addbeg(int no)
{
	struct node *q;
	q = p;
	p = (struct node*) malloc(sizeof(struct node));
	p->data = no;
	p->link = q;
	printf("\nCreated Node at First ");
	getch();
}
//To add elements specific location
void addbet(int no,int pos)
{
	struct node *q,*temp;
	int i;
	q = p;
	if(pos > 0)
	{
		for(i=1;i<pos;i++)
		{
			q = q -> link;
			if(q->link == NULL)
			{
				printf("\nYou are on Last Node, Position Out of Range..");
				getch();
				goto E1;
			}
		}
		temp = (struct node*) malloc(sizeof(struct node));
		temp->data = no;
		temp->link = q->link;
		q->link = temp;
		printf("\nCreate Node at Position %d ",pos+1);
	}
	else
	{
		printf("\nPosition Must be Greater Then Zero ");
	}
	getch();
	E1:
}

//To Display All Nodes
void display(void)
{
	struct node *q;
	q = p;
	while(q != NULL)
	{
		printf("%d ->",q->data);
		q = q->link;
	}
	getch();
}

//To delete first node
void delfirst(void)
{
	struct node *q;
	q = p;
	if(p != NULL)
	{
		p = p->link;
		free(q);
		printf("\nNode Deleted... ");
	}
	else
	{
		printf("\nLink List is Empty...");
	}
	getch();
}
//To delete specific node
int delnode(int no)
{
	struct node *q,*temp;
	q = p;
	if(q->data == no) // First Node
	{
		p = q->link;
		free(q);
		return 1;
	}
	while(q->link->link != NULL)    // Between Node
	{
		if(q->link->data == no)  //20 == 20 true
		{
			temp = q->link;  // 20 -> temp
			q->link = temp->link;
			free(temp);
			return 1;
		}
		q = q ->link;
	}
	if(q->link->data == no)  // Last Node
	{
		temp = q->link;
		q->link = NULL;
		free(temp);
		return 1;
	}
	return 0;
}
//To delete last node
int dellast(void)
{
	struct node *q,*temp;
	q = p;
	if(p == NULL)
	{
		return 0;
	}
	while(q->link->link != NULL)    // Between Node
	{
		q = q ->link;
	}
	temp = q->link;
	q->link = NULL;
	free(temp);
	return 1;
}
/*
//To search elements in the linked list
void search(int no)
{
	struct node *q;
	int flag = 1;
	q = p;
	if(q == NULL)
	{
		printf("\nLink List is Empty...");
	}
	else
	{
		while(q != NULL)
		{
			if(q->data == no)
			{
				flag = 0;
				printf("\n%d Element Found in list...",no);
				break;
			}
			q = q -> link;
		}
		if(flag == 1)
		{
			printf("\nElement Not Found in List...");
		}
	}
	getch();
}
//To short Linked list
void sort(void)
{
	struct node *i,*j;
	int temp;
	i = p;
	while(i != NULL)
	{
		j = i->link;
		while(j != NULL)
		{
			if(i->data > j->data)
			{
				temp = i->data;
				i->data = j->data;
				j->data = temp;
			}
			j = j->link;
		}
		i = i->link;
	}
	printf("\nLink List Data Sorting... ");
	getch();
}
//To set linked list into Reverse
void reverse(void)
{
	struct node *q,*temp;
	if(p != NULL)
	{
		temp = p;
		q = p -> link;
		p = p -> link;
		temp->link = NULL;
		while(p != NULL)
		{
			p = p -> link;
			q->link = temp;
			temp = q;
			q = p;
		}
		p = temp;
		printf("\nLink List in Reverse Order...");
	}
	else
	{
		printf("\nLink List is Empty...");
	}
	getch();
}
*/
























