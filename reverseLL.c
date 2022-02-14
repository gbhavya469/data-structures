#include<stdio.h>
  #include<stdlib.h>
  // #include"reverse.h"
typedef struct node
{
    int data;
    struct node *next;
}node;
node *head=NULL;

node *create(node *head,int item)
{
    node *new =(node *)malloc(sizeof(node));
    new->data=item;
    new->next=NULL;
    if(head==NULL)
    {
      head =new;
    }
    else
    {
      node *ptr=head;
      while(ptr->next!=NULL)
      {
        ptr=ptr->next;
      }
      ptr->next=new;
    }
    
   return head;
}

node *reverse(node *head)
{
    node *next =NULL;
    node *prev=NULL;

    while(head!=NULL)
    {
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    head=prev;
    return head;
}

void display(node *head)
{
    node *ptr=head;
    if(head==NULL)
    {
        printf("list is empty");

    }
    while(ptr!=NULL)
    {
        printf("elements are :%d \n",ptr->data);
        ptr=ptr->next;
    }
}
void main()
{
    int n,i,item;
    printf("enter no of elements in list\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         printf("enter elements for list\n");
         scanf("%d",&item);
         head =create(head,item);
    }
    printf("before reversing\n");
    display(head);
    head = reverse(head);
    printf("after reversing");
    display(head);
}
