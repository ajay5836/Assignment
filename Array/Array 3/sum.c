// input num and get the sum of their digits
#include<stdio.h>
int sum(int);
int main()
{
    int n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    sum(a[i]);
    return 0;
}
int sum(int num)
{
    int s=0,t=num;
    while(t!=0)
    {
        s=s+(t%10);
        t=t/10;
    }
    printf("Sum of dig. of %d: %d\n",num,s);
}

