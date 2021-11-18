**************************************BINARY SEARCH***********************************

#include<stdio.h>
#include<stdlib.h>

int binary(int a[],int key,int low,int high){
int mid;
if(low>high)
return -1;
mid=(high+low)/2;

    if(key==a[mid])
        return mid;
    
    else if(key<a[mid])
    binary(a,key,low,mid-1);

    else
     binary(a,key,mid+1,high);
}

int main()
{
int i,n, key ,pos=0;
printf("Enter the size of an array\n");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of an array in ascending order\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Elements of an array are: ");
for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
int high=n-1,low=0;
printf("Enter the key element to search\n");
scanf("%d",&key);

pos= binary(arr,key,low,high);

if(pos!=-1)
printf("Element %d is at position %d\n",key,pos+1);
else
printf("Element not found\n");
return 0;
}
