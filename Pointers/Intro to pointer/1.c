#include <stdio.h>
int main()
{
    char a;
    int b;
    float c;
    double d;
    char *pa=&a;
    int  *pb=&b;
    float  *pc=&c;
    double *pd=&d;
    printf("Enter a character (a)");
    scanf("%c",pa);
    printf("Enter a integer(b): ");
    scanf("%d",pb);
    printf("Enter a floating point value(c): ");
    scanf("%f",pc);
    printf("Enter a double value(d): ");
    scanf("%lf",pd);
    printf("address of a:%p\n",pa);
    printf("value of a: %c\n",*pa);
    printf("address of b:%p\n",pb);
    printf("value of b: %d\n",*pb);
    printf("address of c:%p\n",pc);
    printf("value of c: %f\n",*pc);
    printf("address of d:%p\n",pd);
    printf("value of d: %lf\n",*pd);
    return 0;
}