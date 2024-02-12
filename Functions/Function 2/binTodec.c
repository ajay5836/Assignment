#include <stdio.h>
#include <math.h>
void bintodec(int);
int main()
{
    int num, ch;
    printf("Enter the binary number: ");
    scanf("%d", &num);
    bintodec(num);
    return 0;
}
void bintodec(int n)
{
    int res = 0, c = 0, t = n, rem;
    while (t != 0)
    {
        rem = t % 10;
        res += rem * pow(2, c++);
        t /= 10;
    }
    printf("Decimal equivalent of %d: %d\n", n, res);
}
