#include <stdio.h>
int n;
void sort(int[]);
int main()
{

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d number in array: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a);
    return 0;
}
void sort(int b[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (b[i] > b[j])
            {
                int t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", b[i]);
}