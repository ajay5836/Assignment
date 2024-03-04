#include <stdio.h>
int main()
{
    int a,b;
    int *p=&a,*q=&b;
    printf("Enter a,b: ");
    scanf("%d %d",p,q);
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
    printf("After swapping\n");
    printf("a= %d, b=%d",*p,*q);
    return 0;
}