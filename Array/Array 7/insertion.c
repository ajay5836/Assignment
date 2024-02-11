// to insert an element to the array 
#include<stdio.h>
int main()
{
	int i,n,x,pos;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements in array: ",n);	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the position where you want to put an element in the array: ");
	scanf("%d",&pos);
	printf("Enter the element: ");
	scanf("%d",&x);
	n=n+1;
	for(i=n-1;i>=pos;i--)
	a[i]=a[i-1];
	a[pos-1]=x;
	printf("New Array after insertion: ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
} 	