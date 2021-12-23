#include<stdio.h>

typedef struct node{
    int data;
    struct node* next;
}*node;

node head = NULL;

node findLastNode(node last){
if(head==NULL)
return NULL;
node ptr = head;
while(ptr->next!=last)
ptr = ptr->next;
return ptr;
}

node insert(){
    int data;
    printf("Enter the data and press -1 to exit entering\n");
    scanf("%d",&data);
    if(data == -1)
    return NULL;
    node ptr = (node*)malloc(sizeof(node));
    ptr->data = data;
    if(head == NULL)
    head = ptr;
    ptr ->next = insert(); 
    return ptr;
}

node search(node h,int data){
    if(h == NULL || h->data==data)
    return h;
    return search(h->next,data);
    }

void display(node h){
    if(h==NULL){
    return ;
    }
    printf("%d ",h->data);
    display(h->next);
}

void delete(){
    if(head == NULL)
    {
        printf("No element to delete\n");
        return ;
    }

    int data;
    printf("Enter the data to be deleted\n");
    scanf("%d",&data);
    node ptr = search(head, data);
    if(ptr==NULL){
    printf("Element not exist\n");
    return ;
    }
    if(head == ptr ){
    head = ptr ->next;
    free(ptr);
    return;
    }
node temp = findLastNode(ptr);
temp->next = ptr->next;
free(ptr);
}


int main(){

int n,val;
while(1){
printf("\n1.Insert\n2.Delete\n3.Display\n4.Search\n5.Exit\n");
printf("\nEnter the choice\n");
scanf("%d",&n);

switch (n)
{
case 1 :
    if(head == NULL)
    {
        insert();
        break;
    }
    node ptr = findLastNode(NULL);
    ptr -> next = insert();
       break;

case 4:
printf("Enter the data to search\n");
scanf("%d",&val);
node h = search(head,val);
if(h==NULL)
printf("Element not exist\n");
else
printf("ELement %d founded\n",val);
break;

case 2:
delete();
break;

case 3:
display(head);
break;

case 5:
exit(0);
break;

default:
printf("Enter the valid choice\n");
    break;
}
}


return 0;
}
