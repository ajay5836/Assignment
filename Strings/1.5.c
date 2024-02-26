#include <stdio.h>
int main()
{
    char a[100];
    printf("Enter the string: ");
    gets(a);
    for (int i = 0; a[i]; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        a[i]+=32;
    }
    puts(a);
    return 0;
}
