#include <stdio.h>
int main()
{
    int i;
    char a[100];
    printf("Enter the string : ");
    gets(a);
    for(i=0;a[i]!='\0';i++);
    printf("String length: %d",i);
    return 0;
}