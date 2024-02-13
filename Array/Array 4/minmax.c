// to find maximum and minimum elements in the array 
#include <stdio.h>
int main()
{
    int n, m, max, min;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n], i;
    printf("enter %d elements in array a: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    min = max = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("largest element: %d\n", max);
    printf("largest element: %d", min);

    return 0;
}
