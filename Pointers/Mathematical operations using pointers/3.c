#include <stdio.h>
int main()
{
    int a,b,c;
    int *pa=&a,*pb=&b;
    printf("Which mathematical operation do you want to perfom\n");
    printf("Enter 1 for addition\n");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
    printf("Enter choice: ");
    scanf("%d",&c);
    printf("Enter a: ");
    scanf("%d",pa);
    printf("Enter b: ");
    scanf("%d",pb);
    switch(c)
    {
        case 1:
        printf("Sum: %d",*pa+(*pb));
        break;
        case 2:
        printf("Difference: %d",*pa-(*pb));
        break;
        case 3:
        printf("Product: %d",*pa*(*pb));
        break;
        case 4:
        printf("Quotient: %f",(float)*pa/(*pb));
        break;
    }
    return 0;
}