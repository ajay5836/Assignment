//reversing a array using sorting 
#include <stdio.h>
int main()
{
    int n, i, t;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements in array: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n / 2; i++)
    {
        t = a[n - (i + 1)];
        a[n - (i + 1)] = a[i];
        a[i] = t;
    }
    printf("Reverse sorted array : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}