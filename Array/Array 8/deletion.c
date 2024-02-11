// to delete an element from the array 
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
	printf("Enter the position of element which you want to delete from the array: ");
	scanf("%d",&pos);
	if(pos>n)
	printf("Deletion isn't possible");
	for(i=pos-1;i<n-1;i++)
	a[i]=a[i+1];
	printf("New Array after deletion: ");
	for(i=0;i<n-1;i++)
	printf("%d ",a[i]);
	return 0;
} 	