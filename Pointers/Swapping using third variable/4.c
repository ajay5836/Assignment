#include <stdio.h>
int main()
{
    int a,b,c;
    int *p=&a,*q=&b,*r=&c;
    printf("Enter a,b: ");
    scanf("%d %d",p,q);
    *r=*p;
    *p=*q;
    *q=*r;
    printf("After swapping\n");
    printf("a= %d, b=%d",*p,*q);
    return 0;
}