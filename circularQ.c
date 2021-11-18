#include<stdio.h>
#include<stdlib.h>
#define size 6
int queue[size];
int element;
int front=-1,rear=-1;
void enQ(int element)
{
    if ((front == rear+1) || (front == 0 && rear==size-1)){
        printf("Queue is full\n");
    }
    else{
        if(front==-1)
        front=0;
        rear=(rear+1)%size;
        queue[rear]=element;
        printf("Element inserted= %d",element);
    }
}
void deQ(){
    int element;
        if(front==-1){
            printf("Queue is empty\n");
        }
        else{
            
            if(front==rear){
            front=-1;
            rear=-1;
            }
            else{
            front=(front+1)%size;
            element=queue[front];
            }
            printf("Element deleted ");
            
          }
} 
void display(){
    int i;
        if(front==-1)
        printf("Queue is empty\n");

        else{
             if(front<=rear){
            printf("Elements of queue are: ");
            for(int i=front;i<=rear;i++)
            printf(" %d ",queue[i]);
        }
        else{
            
            printf("Elements of queue are: ");
            for(i=0;i<=rear;i++)
            printf(" %d ",queue[i]);
            for(i=front;i<=size-1;i++)
            printf(" %d ",queue[i]);
        }}
}
void main()
{
     int choice;
printf("1.Enqueue the element\n2.Dequeue the element\n3.display the queue\n4.Exit\n");
     for(;;){
     printf("\nEnter the choice\n");
     scanf("%d",&choice);

     switch (choice)
     {
     case 1:
     printf("Enter the element you want to insert\n");
     scanf("%d",&element);
         enQ(element);
         break;
    case 2:
        deQ();
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
