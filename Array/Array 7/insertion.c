// to insert an element in an array at certain position  
#include<stdio.h>
int main()
{
	int i,n,x,pos;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[100];
	printf("Enter %d elements in array: ",n);	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the position where you want to put an element in the array: ");
	scanf("%d",&pos);
	printf("Enter the element: ");
	scanf("%d",&x);
	n=n+1;			  //increase array size by one to make a room for element to be inserted 
	for(i=n-1;i>=pos;i--)
		a[i]=a[i-1];  // each element is shifted right to make room for element to be inserted 
	a[pos-1]=x;       // element placed at empty room
	printf("New Array after insertion: ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
} 	