// input num and get the sum of their digits
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        int s = 0, t = a[i];
        while (t != 0)
        {
            s = s + (t % 10);
            t = t / 10;
        }
        printf("Sum of dig. of %d: %d\n", a[i], s);
    }
    return 0;
}
