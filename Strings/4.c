#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter the string: ");
    gets(a);
    int v = 0, c = 0, s=0;
    for (int i = 0; a[i]; i++)
    {
        if (a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)
        {
            if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
                v++;
            else
                c++;
        }
        else
            s++;
    }
    printf("Vowels: %d\n",v);
    printf("Consonants: %d\n",c);
    printf("Special Characters: %d\n",s);
    return 0;
}
