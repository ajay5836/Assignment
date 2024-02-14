//sorting of array 
#include<stdio.h>
int main()
{
	int n,i,j,t;
	printf("Enter the size of array: ");	
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements in an array: ",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("Sorted array in ascending order: ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}