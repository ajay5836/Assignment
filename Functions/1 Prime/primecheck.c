// to check whether a integer is prime or not using function 
#include <stdio.h>
int primeCheck();
int main()
{
	int num;
	printf("Enter a positive integer: ");
	scanf("%d",&num);
	primeCheck(num);
	return 0;
}
int primeCheck(int n)
{
	int i,c=0;
	if(n>1)
	{
		for (i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				c=1;
				break;
			}
		}
		if(c==1)
		printf("%d is a composite number ",n);
		else
		printf("%d is a prime number ",n);
	}	
	else if(n==1)
	printf("One is neither prime nor composite number!");
	else
	printf("Enter a positive integer greater than 0!");
}
