#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter a string: ");
    gets(a);
    int t,l=strlen(a);

    for(int i=0;i<l/2;i++)
    {
        t=a[i];
        a[i]=a[l-i-1];
        a[l-i-1]=t;
    }
    puts(a);

}