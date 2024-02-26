#include <stdio.h>
#include <string.h>
int main()
{
    int pos;
    char a[100];
    printf("Enter the string: ");
    fgets(a, 100, stdin);
    printf("Enter the position from where you want to delete a character of the string: ");
    scanf("%d", &pos);
    for (int i = pos - 1; i < strlen(a); i++)
        a[i] = a[i + 1];
    puts(a);
    return 0;
}
