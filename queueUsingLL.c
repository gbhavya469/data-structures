#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
	int data;
	struct node* link;
}node;
node *head=NULL,*temp=NULL,*ptr=NULL;

int n;

void insert()
{

		temp=(node*)malloc(sizeof(node));
		printf("\n Enter the data ");
		scanf("%d", &(temp->data));
		temp->link=NULL;

		if (head==NULL)
		{
			head=temp;
		}
		else
		{
			ptr=head;
			while(ptr->link!=NULL)
			{
				ptr=ptr->link;

			}
			ptr->link=temp;

		}

}


void delete()
{	if (head==NULL)
	{
		printf("\nQueue is empty :( ");
	}
	else if(head->link== NULL)
	{   free(head);
	    head = NULL;
	}
	else
	{
		temp=head;
		head=head->link;
		free(temp);

	}
}

void display()
{
	if (head==NULL)
	{
		printf("Queue is empty :( ");
	}
	else
	{
		ptr=head;
		while (ptr!=NULL)
		{
			printf("\t %d --> ",ptr->data);
			ptr=ptr->link;

		}
	}
}

void main()
{
	int ch;

	while (1)
	{
		printf("\n Menu \n 1. Insert  \n 2. Delete  \n 3. Display  \n 4. exit : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert();
				break;
			case 2: delete();
				break;
			case 3: display();
				break;
			case 4: exit(0);

		}
	}
}
