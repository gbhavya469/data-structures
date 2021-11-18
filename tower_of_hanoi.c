***********************************TOWER OF HANOI ***************************************

#include<stdio.h>
#include<stdlib.h>

void Towers(int n,char source,char dest,char temp){
int count=0;
if(n==1){
    count++;
    printf("Move the disk from peg %c to peg %c\n",source,dest);
    return;
}
Towers(n-1,source,temp,dest);
count++;
printf("Move %d disk from peg %c to peg %c\n",n,source,dest);
Towers(n-1,temp,dest,source);
}
void main()
{
int n;
printf("Let A,B,C be the source peg, destination peg and temporary storage peg\n");
printf("Enter the number of plates\n");
scanf("%d",&n);
printf("Steps to move %d plates from one peg to another are:\n",n);
Towers(n,'A','B','C');
}
