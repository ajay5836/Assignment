// to find number of odd and even elements in an array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n],e=0,o=0;
    printf("Enter the numbers in array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        e++;
        else
        o++;
        
    }
    printf("No. of even terms in array:%d\n",e);
    printf("No. of odd  terms in array:%d",o);
    return 0;
}


   
