// to check number of prime number present in array
#include <stdio.h>
#include <stdlib.h>
int main()
{

    system("cls");
    int n, i, flag = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d positive integers in array: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        int c = 0;
        if (a[i] <= 1)
            c = 1;
        else
        {
            for (int j = 2; j * j <= a[i]; j++)
            {
                if (a[i] % j == 0)
                {
                    c = 1; // not a prime
                    break;
                }
            }
        }

        if (c == 0)
            flag++;
    }
    printf("Entered array contains %d prime numbers", flag);
    return 0;
}