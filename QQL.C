#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node*next;
};
struct node*front,*rear;;

void insert();
void delet();
void display();
void main()
{
int choice;
clrscr();
while(choice !=4)
{
printf("main menu");
printf("\n 1. insert an element\n2.delet an elelment\n3.display the queue\n4.exit");
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delet();
break;
case 3:
display();
break;
case 4:
exit();
break;
default:
printf("\nenter the valid choice??");
}
}
}
void insert()
	{
	struct node*ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	if(ptr==NULL)
		{
		printf("\noverflow");
		return;
		}
	else
		{
		printf("enter value?");
		scanf("%d",&ptr->data);
		ptr->next=NULL;
		if(front==NULL)
			{
			front=rear=ptr;
			}
		else
			{
			rear->next=ptr;
			rear=ptr;
			}
		}
	}
void delet()
{
struct node*ptr;
int item;
if(front == NULL)
{
printf("\nUNDERFLOW");
return;
}
else
{
ptr=front;
item=ptr->data;
front=front->next;
free(ptr);
printf("\n deleted data %d",item);
}
}
void display()

{
struct node*ptr;
ptr=front;
if(front == NULL)
printf("\n empty queue");
while(ptr!=NULL)
{
printf("\n%d\n",ptr->data);
ptr=ptr->next;
}
}
