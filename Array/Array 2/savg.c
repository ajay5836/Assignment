#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n], sum = 0;
    float avg;
    printf("Enter the numbers in array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        sum += a[i];
    printf("sum =%d", sum);
    avg = (float)sum / n;
    printf("\navg =%.2f", avg);

    return 0;
}
