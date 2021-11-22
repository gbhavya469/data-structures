#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node* link;
}node;
node *head=NULL,*temp=NULL,*ptr=NULL;
int n;

void push()
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

void pop()
{	if (head==NULL)
	{
		printf("List is empty :( ");
	}
	else if(head->link == NULL)
	{   free(head);
	    head = NULL;
	}
	else
	{
		ptr=head;
		while (ptr->link!=NULL)
		{
			temp=ptr;
			ptr= ptr->link;

		}
		temp->link=NULL;
		free(ptr);
	}
}

void display()
{
	if (head==NULL)
	{
		printf("List is empty :(");
	}
	else
	{
		ptr=head;
		while (ptr!=NULL)
		{
			printf(" %d --> ",ptr->data);
			ptr=ptr->link;

		}
	}
}

void main()
{
	int ch;

	while (1)
	{
		printf("\n Menu \n 1. PUSH a node  \n 2. POP a node  \n 3. Display \n 4. exit : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
            case 4: exit(0);

		}
	}
}
