#include<stdio.h>
#include<stdlib.h>
#define size 6
int front=-1,rear=-1;
int queue[size];
int item;
void enQ(int item)
{
    if(rear==size-1)
    {
        printf("Queue ovrflow\n");
        return;
    }
    if(front==-1)
    front=0;
    rear++;
    queue[rear]=item;
}
int deQ(){
    int del=queue[front];
    if(front==-1||front>rear){
        printf("Queue underflow\n");
    return 0;
    }
   else{
    front++;
    return del;
    printf("Element removed sucessfully\n");
}
}
void display(){
    if(front==-1||front>rear)
    {
        printf("Queue is empty\n");
        return;
    }
    else{
        printf("Queue is: ");
        for(int i=front;i<=rear;i++)
            printf(" %d  ",queue[i]);
        
    }
}


void main()
{
     int choice=0;
printf("1.Enqueue the element\n2.Dequeue the element\n3.display the queue\n4.Exit\n");
     for(;;){
     printf("\nEnter the choice\n");
     scanf("%d",&choice);

     switch (choice)
     {
     case 1:
     printf("Enter the element you want to insert\n");
     scanf("%d",&item);
         enQ(item);
         break;
    case 2:
        item=deQ();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
        break; 
     
    default:
    printf("Enter valid choice\n");
        break;
     }
     }

}
