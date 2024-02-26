#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter the string: ");
    gets(a);
    printf("String length: %d",strlen(a));
    return 0;
}