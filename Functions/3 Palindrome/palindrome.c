// to check whether a number is palindrome or not . eg 121 or 12321
#include <stdio.h>
#include <math.h>
int palindromeCheck(int n)
{
    int i = n, c = 0, rem, sum = 0;
    while (i != 0)
    {
        i = i / 10;
        c++;
    }
    c--;
    i = n;
    while (i != 0)
    {
        rem = i % 10;
        sum += rem * round(pow(10, c));
        i /= 10;
        c--;
    }
    return sum;
}
int main()
{
    int num, t;
    printf("Enter the number: ");
    scanf("%d", &num);
    t = palindromeCheck(num);
    if (t == num)
    {
        printf("%d is a palindrome", num);
    }
    else
    {
        printf("%d is not a palindrome", num);
    }
    return 0;
}