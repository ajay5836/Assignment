// to input two different arrays and put their sum in third array
#include <stdio.h>
int main()
{
    int n, m, l, s;
    printf("Enter the size of array 1: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements in array: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the size of array 2: ");
    scanf("%d", &m);
    int b[m];
    printf("Enter %d elements in array: ", m);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    if (n > m)
    {
        l = n;
        s = m;
    }

    else
    {
        l = m;
        s = n;
    }
    int c[l];
    for (int i=0;i<s;i++)
    c[i]=a[i]+b[i];
    for(int i=s;i<l;i++)
    {
        if(n>m)
        c[i]=a[i];
        else
        c[i]=b[i];
    }
    printf("Sum Array: ");
    for(int i=0;i<l;i++)
    printf("%d ",c[i]);
    return 0;
}
