#include <stdio.h>
void swap(int *p, int *q )
{
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;

}
int main()
{
    int a,b,c;
    printf("Enter a,b: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("After swapping\n");
    printf("a= %d, b=%d",a,b);
    return 0;
}