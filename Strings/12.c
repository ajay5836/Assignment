#include <stdio.h>
#include <string.h>
int main()
{
    int pos;
    char a[100];
    printf("Enter the string: ");
    fgets(a, 100, stdin);
    printf("Enter the position where you want to add a character to the string: ");
    scanf("%d", &pos);
    printf("Enter the key you want to enter in the string: ");
    char c;
    scanf(" %c", &c);
    for (int i = strlen(a); i >= pos - 1; i--)
        a[i + 1] = a[i];
    a[pos - 1] = c;
    puts(a);
    return 0;
}
